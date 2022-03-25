#ifndef __SENTIENT_CORE_TYPE_TRAITS_HPP__
#define __SENTIENT_CORE_TYPE_TRAITS_HPP__

#include <type_traits>

namespace sentient
{
namespace type_traits
{

/*
 * @author Jin
 * @brief 
 **/
struct sentient_model_attr { using base_type = sentient_model_attr; };

struct packed_attr : sentient_model_attr { using packed_attr_type = packed_attr; };

struct static_model_attr : sentient_model_attr { using model_flexiblity_attr_type = static_model_attr; };
struct dynamic_model_attr : sentient_model_attr { using model_flexiblity_attr_type = dynamic_model_attr; };

template <const char* _DatabaseName>
struct dbms_compatible_attr : sentient_model_attr
{
	static constexpr const char* database_name = _DatabaseName;
	using dbms_compatibility_attr_type = dbms_compatible_attr;
};

template <typename _Model>
struct is_sentient_model :
	std::is_same<typename _Model::base_type, sentient_model_attr> { };
template <typename _Model>
constexpr inline bool is_sentient_model_v = is_sentient_model<_Model>::value;

template <typename _Model>
struct is_static_model :
	std::is_same<typename _Model::model_flexiblity_attr_type, static_model_attr> { };
template <typename _Model>
constexpr inline bool is_static_model_v = is_static_model<_Model>::value;

template <typename _Model>
struct is_dynamic_model :
	std::is_same<typename _Model::model_flexiblity_attr_type, dynamic_model_attr> { };
template <typename _Model>
constexpr inline bool is_dynamic_model_v = is_dynamic_model<_Model>::value;

template <typename _Model, const char* _Model::database_name>
struct is_dbms_compatible_model :
	std::is_same<typename _Model<database_name>::dbms_compatibility_attr_type, dbms_compatible_attr> { };
template <typename _Model, const char* _Model::database_name>
constexpr inline bool is_dbms_compatible_model_v = is_dbms_compatible_model<_Model, database_name>::value;


namespace concepts
{
	
}
}
}
#endif