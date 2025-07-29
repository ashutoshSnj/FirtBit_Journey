package Com.Coin.Entity;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.Table;
@Entity
@Table (name="Case_Study_Coin")
public class Coin {
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column (name="Coin_id")
	   int coin_id;
	@Column (name="Country")
      String Country;
	@Column (name="Denomination")
      String Denomination;
	@Column (name="Year_of_minting")
      int Year_of_minting;
	@Column (name="Current_value")
      double Current_value;
	@Column (name="Acquired_date")
      String Acquired_date;
      
	
	public int getCoin_id() {
		return coin_id;
	}
	public void setCoin_id(int coin_id) {
		this.coin_id = coin_id;
	}
	public String getCountry() {
		return Country;
	}
	public void setCountry(String country) {
		Country = country;
	}
	public String getDenomination() {
		return Denomination;
	}
	public void setDenomination(String denomination) {
		Denomination = denomination;
	}
	public int getYear_of_minting() {
		return Year_of_minting;
	}
	public void setYear_of_minting(int year_of_minting) {
		Year_of_minting = year_of_minting;
	}
	public double getCurrent_value() {
		return Current_value;
	}
	public void setCurrent_value(double current_value) {
		Current_value = current_value;
	}
	public String getAcquired_date() {
		return Acquired_date;
	}
	public void setAcquired_date(String acquired_date) {
		Acquired_date = acquired_date;
	}
	public Coin(String country, String denomination, int year_of_minting, double current_value, String acquired_date) {
	
		Country = country;
		Denomination = denomination;
		Year_of_minting = year_of_minting;
		Current_value = current_value;
		Acquired_date = acquired_date;
	}
	
	public Coin() {
		
	}
	 public String toString() {
	        return "Coin{" +
	                "coin_id=" + coin_id +
	                ", country='" + Country + '\'' +
	                ", denomination='" + Denomination + '\'' +
	                ", year_of_minting=" + Year_of_minting +
	                ", current_value=" + Current_value +
	                ", acquired_date='" + Acquired_date + '\'' +
	                '}';
	    }
      
      
      
}
