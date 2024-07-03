data {
  int<lower=0> N;               
  array[N] real mom_iq;        
}

generated quantities {
  real beta0 = normal_rng(110, 20);   
  real beta1 = normal_rng(0, 1);     
  real sigma = 1;

  array[N] real kid_score; 
  for (i in 1:N) {
    kid_score[i] = normal_rng(beta0 + beta1 * mom_iq[i], sigma);  
  }
}