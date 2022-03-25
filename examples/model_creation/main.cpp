#include <sentient/core/types.hpp>
#include <sentient/core/type_traits.hpp>

#include <boost/hana/define_struct.hpp>

namespace snt = sentient;

#pragma pack(push, 1)
struct example_static_model : sentient::type_traits::static_model_attr
{
    BOOST_HANA_DEFINE_STRUCT(example_model,
        (snt::u64_t, model_no),
        (snt::s8_t<64>, name),
        (snt::u16_t, age),
        (snt::s8_t<64>, phone_number)
    );
};
#pragma pack(pop)

#pragma pack(push, 1)
struct example_dynamic_model : sentient::type_traits::dynamic_model_attr
{
    BOOST_HANA_DEFINE_STRUCT(example_model,
        (snt::u64_t, model_no),
        (snt::s8_t<64>, name),
        (snt::u16_t, age),
        (snt::s8_t<64>, phone_number)
    );
};
#pragma pack(pop)

#pragma pack(push, 1)
struct example_dynamic_model : sentient::type_traits::dbms_compatible_attr<"example">
{
    BOOST_HANA_DEFINE_STRUCT(example_model,
        (snt::u64_t, model_no),
        (snt::s8_t<64>, name),
        (snt::u16_t, age),
        (snt::s8_t<64>, phone_number)
    );
};
#pragma pack(pop)

struct fucking {};

int main(int argc, char** argv)
{
    example_static_model m{ {}, 1, "fuck", 30, "01040589050" };
    
    constexpr auto t1 = snt::type_traits::is_sentient_model_v<example_static_model>;
    constexpr auto t2 = snt::type_traits::is_static_model_v<example_static_model>;
    constexpr auto t3 = snt::type_traits::is_dynamic_model_v<example_dynamic_model>;

    // constexpr auto ff = snt::is_static_model<example_model>::value;

    return 0;
}
