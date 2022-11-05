class base_of_five_defaults
{
	public:
		base_of_five_defaults(const base_of_five_defaults&) = default;
		base_of_five_defaults(base_of_five_defaults&&) = default;
		base_of_five_defaults& operator=(const base_of_five_defaults&) = default;
		base_of_five_defaults& operator=(base_of_five_defaults&&) = default;
		virtual ~base_of_five_defaults() = default;
};
