data {
  int<lower=0> N;               
  array[N] real mom_iq;  
  array[N] real kid_score;      
}

parameters {
  real<lower=0> beta0;
  real<lower=0> beta1;
  real<lower=0> sigma;

}

model {
  beta0 ~ normal(0, 1);   
  beta1 ~ normal(0, 1); 
  sigma ~ gamma(2,2);
  for (i in 1:N) {
    kid_score[i] ~ normal(beta0 + beta1 * mom_iq[i], sigma);  
  }
}
generated quantities {

    array[N] real<lower=0> kid_score_pred;    
    for (i in 1:N) {
        kid_score_pred[i] = abs(normal_rng(beta0 + beta1 * mom_iq[i], sigma));  
    }
}