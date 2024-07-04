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
    beta0 ~ normal(100, 40);   
    beta1 ~ normal(0.5, 1); 
    beta2 ~ normal(0, 10);  
    beta3 ~ normal(0, 5);
    sigma ~ student_t(4,0,10);
  for (i in 1:N) {
    kid_score[i] ~ normal(beta0 + beta1 * mom_iq[i] + beta2*mom_hs[i] + beta3*mom_iq[i]*mom_hs[i], sigma);  
  }
}
generated quantities {

    array[N] real kid_score_pred;    
    for (i in 1:N) {
        kid_score_pred[i] = normal_rng(beta0 + beta1 * mom_iq[i] + beta2*mom_hs[i] + beta3*mom_iq[i]*mom_hs[i], sigma);  
    }
}