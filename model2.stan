data {
  int<lower=0> N;               
  array[N] real mom_iq;  
  array[N] real kid_score;  
  array[N] real mom_hs;      
}

parameters {
  real beta0;
  real beta1;
  real sigma;
  real beta2;
  real beta3;

}

model {
    beta0 ~ normal(90, 15);   
    beta1 ~ normal(0, 1); 
    beta2 ~ normal(0, 1);  
    beta3 ~ normal(0, 0.5);
    sigma ~ student_t(4, 0, 1);
  for (i in 1:N) {
    kid_score[i] ~ normal(beta0 + beta1 * mom_iq[i] + beta2*mom_hs[i] + beta3*mom_iq[i]*mom_hs[i], sigma);  
  }
}
generated quantities {

    array[N] real kid_score_pred;    
    array[N] real log_lik;

    for (i in 1:N) {
        log_lik[i] = normal_lpdf(kid_score[i] | beta0 + beta1 * mom_iq[i] + beta2*mom_hs[i] + beta3*mom_iq[i]*mom_hs[i], sigma);
        kid_score_pred[i] = normal_rng(beta0 + beta1 * mom_iq[i] + beta2*mom_hs[i] + beta3*mom_iq[i]*mom_hs[i], sigma);  
    }
}