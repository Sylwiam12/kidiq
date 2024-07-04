data {
  int<lower=0> N;               
  array[N] real mom_iq;
  array[N] real mom_hs;

}

generated quantities {
  real beta0 = normal_rng(100, 40);   
  real beta1 = normal_rng(0.5, 1); 
  real beta2 = normal_rng(0, 10);  
  real beta3 = normal_rng(0, 5);
  real sigma = student_t_rng(4,0,10);

  array[N] real kid_score; 
  for (i in 1:N) {
    kid_score[i] = normal_rng(beta0 + beta1 * mom_iq[i] + beta2*mom_hs[i] + beta3*mom_iq[i]*mom_hs[i], sigma);  
  }
}