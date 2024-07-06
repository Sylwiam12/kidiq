
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace model2_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 29> locations_array__ = 
{" (found before start of program)",
 " (in '/home/DA/kidiq2/model2.stan', line 9, column 2 to column 13)",
 " (in '/home/DA/kidiq2/model2.stan', line 10, column 2 to column 13)",
 " (in '/home/DA/kidiq2/model2.stan', line 11, column 2 to column 13)",
 " (in '/home/DA/kidiq2/model2.stan', line 12, column 2 to column 13)",
 " (in '/home/DA/kidiq2/model2.stan', line 13, column 2 to column 13)",
 " (in '/home/DA/kidiq2/model2.stan', line 29, column 4 to column 33)",
 " (in '/home/DA/kidiq2/model2.stan', line 30, column 4 to column 26)",
 " (in '/home/DA/kidiq2/model2.stan', line 33, column 8 to column 128)",
 " (in '/home/DA/kidiq2/model2.stan', line 34, column 8 to column 119)",
 " (in '/home/DA/kidiq2/model2.stan', line 32, column 19 to line 35, column 5)",
 " (in '/home/DA/kidiq2/model2.stan', line 32, column 4 to line 35, column 5)",
 " (in '/home/DA/kidiq2/model2.stan', line 18, column 4 to column 27)",
 " (in '/home/DA/kidiq2/model2.stan', line 19, column 4 to column 25)",
 " (in '/home/DA/kidiq2/model2.stan', line 20, column 4 to column 25)",
 " (in '/home/DA/kidiq2/model2.stan', line 21, column 4 to column 27)",
 " (in '/home/DA/kidiq2/model2.stan', line 22, column 4 to column 31)",
 " (in '/home/DA/kidiq2/model2.stan', line 24, column 4 to column 106)",
 " (in '/home/DA/kidiq2/model2.stan', line 23, column 17 to line 25, column 3)",
 " (in '/home/DA/kidiq2/model2.stan', line 23, column 2 to line 25, column 3)",
 " (in '/home/DA/kidiq2/model2.stan', line 2, column 2 to column 17)",
 " (in '/home/DA/kidiq2/model2.stan', line 3, column 8 to column 9)",
 " (in '/home/DA/kidiq2/model2.stan', line 3, column 2 to column 23)",
 " (in '/home/DA/kidiq2/model2.stan', line 4, column 8 to column 9)",
 " (in '/home/DA/kidiq2/model2.stan', line 4, column 2 to column 26)",
 " (in '/home/DA/kidiq2/model2.stan', line 5, column 8 to column 9)",
 " (in '/home/DA/kidiq2/model2.stan', line 5, column 2 to column 23)",
 " (in '/home/DA/kidiq2/model2.stan', line 29, column 10 to column 11)",
 " (in '/home/DA/kidiq2/model2.stan', line 30, column 10 to column 11)"};




class model2_model final : public model_base_crtp<model2_model> {

 private:
  int N;
  std::vector<double> mom_iq;
  std::vector<double> kid_score;
  std::vector<double> mom_hs; 
  
 
 public:
  ~model2_model() { }
  
  inline std::string model_name() const final { return "model2_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  model2_model(stan::io::var_context& context__,
               unsigned int random_seed__ = 0,
               std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "model2_model_namespace::model2_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 20;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 20;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 20;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 21;
      stan::math::validate_non_negative_index("mom_iq", "N", N);
      current_statement__ = 22;
      context__.validate_dims("data initialization","mom_iq","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      mom_iq = 
        std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 22;
      mom_iq = context__.vals_r("mom_iq");
      current_statement__ = 23;
      stan::math::validate_non_negative_index("kid_score", "N", N);
      current_statement__ = 24;
      context__.validate_dims("data initialization","kid_score","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      kid_score = 
        std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 24;
      kid_score = context__.vals_r("kid_score");
      current_statement__ = 25;
      stan::math::validate_non_negative_index("mom_hs", "N", N);
      current_statement__ = 26;
      context__.validate_dims("data initialization","mom_hs","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      mom_hs = 
        std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 26;
      mom_hs = context__.vals_r("mom_hs");
      current_statement__ = 27;
      stan::math::validate_non_negative_index("kid_score_pred", "N", N);
      current_statement__ = 28;
      stan::math::validate_non_negative_index("log_lik", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1 + 1 + 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "model2_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ beta0 = DUMMY_VAR__;
      current_statement__ = 1;
      beta0 = in__.template read<local_scalar_t__>();
      local_scalar_t__ beta1 = DUMMY_VAR__;
      current_statement__ = 2;
      beta1 = in__.template read<local_scalar_t__>();
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = in__.template read<local_scalar_t__>();
      local_scalar_t__ beta2 = DUMMY_VAR__;
      current_statement__ = 4;
      beta2 = in__.template read<local_scalar_t__>();
      local_scalar_t__ beta3 = DUMMY_VAR__;
      current_statement__ = 5;
      beta3 = in__.template read<local_scalar_t__>();
      {
        current_statement__ = 12;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta0, 90, 15));
        current_statement__ = 13;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta1, 0, 1));
        current_statement__ = 14;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta2, 0, 1));
        current_statement__ = 15;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta3, 0, 0.5));
        current_statement__ = 16;
        lp_accum__.add(stan::math::student_t_lpdf<propto__>(sigma, 4, 0, 1));
        current_statement__ = 19;
        for (int i = 1; i <= N; ++i) {
          current_statement__ = 17;
          lp_accum__.add(
            stan::math::normal_lpdf<propto__>(
              stan::model::rvalue(kid_score, "kid_score",
                stan::model::index_uni(i)),
              (((beta0 +
                  (beta1 *
                    stan::model::rvalue(mom_iq, "mom_iq",
                      stan::model::index_uni(i)))) +
                 (beta2 *
                   stan::model::rvalue(mom_hs, "mom_hs",
                     stan::model::index_uni(i)))) +
                ((beta3 *
                   stan::model::rvalue(mom_iq, "mom_iq",
                     stan::model::index_uni(i))) *
                  stan::model::rvalue(mom_hs, "mom_hs",
                    stan::model::index_uni(i)))), sigma));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "model2_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double beta0 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      beta0 = in__.template read<local_scalar_t__>();
      double beta1 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      beta1 = in__.template read<local_scalar_t__>();
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      sigma = in__.template read<local_scalar_t__>();
      double beta2 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      beta2 = in__.template read<local_scalar_t__>();
      double beta3 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 5;
      beta3 = in__.template read<local_scalar_t__>();
      out__.write(beta0);
      out__.write(beta1);
      out__.write(sigma);
      out__.write(beta2);
      out__.write(beta3);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<double> kid_score_pred =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      std::vector<double> log_lik =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 11;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 8;
        stan::model::assign(log_lik,
          stan::math::normal_lpdf<false>(
            stan::model::rvalue(kid_score, "kid_score",
              stan::model::index_uni(i)),
            (((beta0 +
                (beta1 *
                  stan::model::rvalue(mom_iq, "mom_iq",
                    stan::model::index_uni(i)))) +
               (beta2 *
                 stan::model::rvalue(mom_hs, "mom_hs",
                   stan::model::index_uni(i)))) +
              ((beta3 *
                 stan::model::rvalue(mom_iq, "mom_iq",
                   stan::model::index_uni(i))) *
                stan::model::rvalue(mom_hs, "mom_hs",
                  stan::model::index_uni(i)))), sigma),
          "assigning variable log_lik", stan::model::index_uni(i));
        current_statement__ = 9;
        stan::model::assign(kid_score_pred,
          stan::math::normal_rng(
            (((beta0 +
                (beta1 *
                  stan::model::rvalue(mom_iq, "mom_iq",
                    stan::model::index_uni(i)))) +
               (beta2 *
                 stan::model::rvalue(mom_hs, "mom_hs",
                   stan::model::index_uni(i)))) +
              ((beta3 *
                 stan::model::rvalue(mom_iq, "mom_iq",
                   stan::model::index_uni(i))) *
                stan::model::rvalue(mom_hs, "mom_hs",
                  stan::model::index_uni(i)))), sigma, base_rng__),
          "assigning variable kid_score_pred", stan::model::index_uni(i));
      }
      out__.write(kid_score_pred);
      out__.write(log_lik);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ beta0 = DUMMY_VAR__;
      beta0 = in__.read<local_scalar_t__>();
      out__.write(beta0);
      local_scalar_t__ beta1 = DUMMY_VAR__;
      beta1 = in__.read<local_scalar_t__>();
      out__.write(beta1);
      local_scalar_t__ sigma = DUMMY_VAR__;
      sigma = in__.read<local_scalar_t__>();
      out__.write(sigma);
      local_scalar_t__ beta2 = DUMMY_VAR__;
      beta2 = in__.read<local_scalar_t__>();
      out__.write(beta2);
      local_scalar_t__ beta3 = DUMMY_VAR__;
      beta3 = in__.read<local_scalar_t__>();
      out__.write(beta3);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"beta0", "beta1", "sigma", "beta2",
      "beta3", "kid_score_pred", "log_lik"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{}, std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "beta0");
    param_names__.emplace_back(std::string() + "beta1");
    param_names__.emplace_back(std::string() + "sigma");
    param_names__.emplace_back(std::string() + "beta2");
    param_names__.emplace_back(std::string() + "beta3");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "kid_score_pred" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "beta0");
    param_names__.emplace_back(std::string() + "beta1");
    param_names__.emplace_back(std::string() + "sigma");
    param_names__.emplace_back(std::string() + "beta2");
    param_names__.emplace_back(std::string() + "beta3");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "kid_score_pred" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"beta0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta1\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta2\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta3\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"kid_score_pred\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"beta0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta1\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta2\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta3\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"kid_score_pred\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((((1 + 1) + 1) + 1) + 1);
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (N + N);
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((((1 + 1) + 1) + 1) + 1);
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (N + N);
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 5> names__{"beta0", "beta1", "sigma",
      "beta2", "beta3"};
      const std::array<Eigen::Index, 5> constrain_param_sizes__{1, 1, 
       1, 1, 1};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = model2_model_namespace::model2_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return model2_model_namespace::profiles__;
}

#endif


