#include <idsslopenssl.hpp> //sha2 (secure hash algoritam)
#include <idhashsha.hpp>
#include <vector>

class korisnik{
	public:
		String korisnickoIme, lozinka;

		korisnik(String un, String pas){
			korisnickoIme = un;
            lozinka = pas;
		}

		void posoliLozinku(){
			lozinka = lozinka + "letMeAddSaltTo" + korisnickoIme;
		}

		void hashirajLozinku(){
            Idsslopenssl::LoadOpenSSLLibrary();
			TIdHashSHA256 * sha = new TIdHashSHA256;
			lozinka = sha->HashStringAsHex(lozinka);
		}

};

class build{
	private:
		int cost;
	public:
		std::vector<String> items;

		build(String i1, String i2, String i3, String i4){
			items.push_back(i1);
			items.push_back(i2);
			items.push_back(i3);
			items.push_back(i4);
            cost = 0;
		}

		int getCost(){
			return cost;
		}

		void setCost(int value){
            cost = value;
		}

};
