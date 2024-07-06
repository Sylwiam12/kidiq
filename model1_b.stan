data {
  int<lower=0> N;               
  array[N] real mom_iq;  
  array[N] real kid_score;      
}

parameters {
  real beta0;
  real beta1;
  real sigma;

}

model {
  beta0 ~ normal(90, 15);   
  beta1 ~ normal(0, 1); 
  sigma ~ student_t(4,0,1);
  for (i in 1:N) {
    kid_score[i] ~ normal(beta0 + beta1 * mom_iq[i], sigma);  
  }
}
generated quantities {

    array[N] real<lower=0> kid_score_pred; 
    array[N] real log_lik;

    for (i in 1:N) {
        log_lik[i] = normal_lpdf(kid_score[i] | beta0 + beta1 * mom_iq[i], sigma);
        kid_score_pred[i] = normal_rng(beta0 + beta1 * mom_iq[i], sigma);  
    }
}