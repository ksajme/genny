#include "yaml-cpp/yaml.h"
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/builder/stream/array.hpp>

using namespace std;

using bsoncxx::builder::stream::document;

namespace mwg {

void parseMap(document&, YAML::Node);
void parseSequence(bsoncxx::v0::builder::stream::array& arraybuilder, YAML::Node node);
}
