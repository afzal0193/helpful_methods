string int_to_bin(int n)
{
    string value = bitset<11>(n).to_string();
    int v = value.find("1");
    return value.substr(v,11);
}
