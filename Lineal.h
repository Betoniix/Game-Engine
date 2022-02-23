namespace Lineal {
    
    class matrix {
    private:
    public:
    };


	class Vector {
	private:
    public:
        //x, y and z dimensions
        float x, y, z;

        //Constructors
        Vector(float aX = 0.0, float aY = 0.0, float aZ = 0.0);

        //Destructors
        ~Vector();

        //Copy Constructors
        Vector(const Vector& v);
        Vector& operator=(const Vector& v);
        Vector operator+(const Vector& v);
        Vector operator-(const Vector& v);
        Vector operator*(const float s);
        float operator*(const Vector& v);
        Vector operator/(const float s);
        Vector operator%(const Vector& v);
        Vector Cross(const Vector& v);
        float Magnitud();
        void Normalize();

        void operator%=(const Vector& v);
        void operator/=(const float s);
        void operator*=(const float s);
        void operator-=(const Vector& v);
        void operator+=(const Vector& v);
	};
}