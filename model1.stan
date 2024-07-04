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
  beta0 ~ normal(100, 40);   
  beta1 ~ normal(0.5, 1); 
  sigma ~ student_t(4,0,10);
  for (i in 1:N) {
    kid_score[i] ~ normal(beta0 + beta1 * mom_iq[i], sigma);  
  }
}
generated quantities {

    array[N] real kid_score_pred;    
    for (i in 1:N) {
        kid_score_pred[i] = normal_rng(beta0 + beta1 * mom_iq[i], sigma);  
    }
}