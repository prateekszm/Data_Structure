//bbsr.highradius.training.model.employee
//1.Account.java
package bbsr.highradius.training.model.employee;

public class Account {
	Integer accountId;
	String accountName;
	public Integer getAccountId() {
		return accountId;
	}
	public void setAccountId(Integer accountId) {
		this.accountId = accountId;
	}
	public String getAccountName() {
		return accountName;
	}
	public void setAccountName(String accountName) {
		this.accountName = accountName;
	}
}

//2.Address.java
package bbsr.highradius.training.model.employee;

public class Address {
	public Integer addressId;
	public String line1;
	public String line2;
	public String street;
	public String city;
	public String zip;
	public String state;
	public String country;
	public Integer getAddressId() {
		return addressId;
	}
	public void setAddressId(Integer addressId) {
		this.addressId = addressId;
	}
	public String getLine1() {
		return line1;
	}
	public void setLine1(String line1) {
		this.line1 = line1;
	}
	public String getLine2() {
		return line2;
	}
	public void setLine2(String line2) {
		this.line2 = line2;
	}
	public String getStreet() {
		return street;
	}
	public void setStreet(String street) {
		this.street = street;
	}
	public String getCity() {
		return city;
	}
	public void setCity(String city) {
		this.city = city;
	}
	public String getZip() {
		return zip;
	}
	public void setZip(String zip) {
		this.zip = zip;
	}
	public String getState() {
		return state;
	}
	public void setState(String state) {
		this.state = state;
	}
	public String getCountry() {
		return country;
	}
	public void setCountry(String country) {
		this.country = country;
	}	
}

//3.Customer.java
package bbsr.highradius.training.model.employee;

public class Customer {
	public Integer pkCustomerMapId;
	public Account fkAccountId;
	public Integer customerNumber;
	public String customerName;
	public Integer getPkCustomerMapId() {
		return pkCustomerMapId;
	}
	public void setPkCustomerMapId(Integer pkCustomerMapId) {
		this.pkCustomerMapId = pkCustomerMapId;
	}
	public Account getFkAccountId() {
		return fkAccountId;
	}
	public void setFkAccountId(Account fkAccountId) {
		this.fkAccountId = fkAccountId;
	}
	public Integer getCustomerNumber() {
		return customerNumber;
	}
	public void setCustomerNumber(Integer customerNumber) {
		this.customerNumber = customerNumber;
	}
	public String getCustomerName() {
		return customerName;
	}
	public void setCustomerName(String customerName) {
		this.customerName = customerName;
	}
	public Customertype getFkCustomerType() {
		return fkCustomerType;
	}
	public void setFkCustomerType(Customertype fkCustomerType) {
		this.fkCustomerType = fkCustomerType;
	}
	public Address getFkAddressId() {
		return fkAddressId;
	}
	public void setFkAddressId(Address fkAddressId) {
		this.fkAddressId = fkAddressId;
	}
	public String getCompanyCode() {
		return companyCode;
	}
	public void setCompanyCode(String companyCode) {
		this.companyCode = companyCode;
	}
	public Customertype fkCustomerType;
	public Address fkAddressId;
	public String companyCode;
}


//4.Customertype.java
package bbsr.highradius.training.model.employee;

public class Customertype {
	public Integer pkCustomerTypeId;
	public Account fkAccountId;
	public Integer getPkCustomerTypeId() {
		return pkCustomerTypeId;
	}
	public void setPkCustomerTypeId(Integer pkCustomerTypeId) {
		this.pkCustomerTypeId = pkCustomerTypeId;
	}
	public Account getFkAccountId() {
		return fkAccountId;
	}
	public void setFkAccountId(Account fkAccountId) {
		this.fkAccountId = fkAccountId;
	}
	public String getCustomerType() {
		return customerType;
	}
	public void setCustomerType(String customerType) {
		this.customerType = customerType;
	}
	public String getDescription() {
		return description;
	}
	public void setDescription(String description) {
		this.description = description;
	}
	public String customerType;
	public String description;
}


//5.EmployeeDetails.java
package bbsr.highradius.training.model.employee;

import java.util.Date;

public class EmployeeDetails {
	
	private Integer pkId;
	private Integer employeeId;
	private String namePrefix;
	private String firstName;
	private String middleName;
	private String lastName;
	private String gender;
	private String email;
	private String fatherName;
	private String motherName;
	private String motherMaidenName;
	private Date dateOfBirth;
	private Integer ageInYrs;
	private Integer weight;
	private Date dateOfJoining;
	private String quarterOfJoining;
	private String halfOfJoining;
	private Integer yearOfJoining;
	private Integer monthOfJoining;
	private String monthNameOfJoining;
	private String shortMonth;
	private Integer dayOfJoining;
	private String dowOfJoining;
	private String shortDow;
	private Integer salary;
	private String lastHike;
	private String ssn;
	private String phoneNo;
	private String placeName;
	private String county;
	private String city;
	private String state;
	private Integer zip;
	private String region;
	private String userName;
	private String password;
	private Boolean isDeleted = false;
	
	public Integer getPkId() {
		return pkId;
	}
	public void setPkId(Integer pkId) {
		this.pkId = pkId;
	}
	public Integer getEmployeeId() {
		return employeeId;
	}
	public void setEmployeeId(Integer employeeId) {
		this.employeeId = employeeId;
	}
	public String getNamePrefix() {
		return namePrefix;
	}
	public void setNamePrefix(String namePrefix) {
		this.namePrefix = namePrefix;
	}
	public String getFirstName() {
		return firstName;
	}
	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}
	public String getMiddleName() {
		return middleName;
	}
	public void setMiddleName(String middleName) {
		this.middleName = middleName;
	}
	public String getLastName() {
		return lastName;
	}
	public void setLastName(String lastName) {
		this.lastName = lastName;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getFatherName() {
		return fatherName;
	}
	public void setFatherName(String fatherName) {
		this.fatherName = fatherName;
	}
	public String getMotherName() {
		return motherName;
	}
	public void setMotherName(String motherName) {
		this.motherName = motherName;
	}
	public String getMotherMaidenName() {
		return motherMaidenName;
	}
	public void setMotherMaidenName(String motherMaidenName) {
		this.motherMaidenName = motherMaidenName;
	}
	public Date getDateOfBirth() {
		return dateOfBirth;
	}
	public void setDateOfBirth(Date dateOfBirth) {
		this.dateOfBirth = dateOfBirth;
	}
	public Integer getAgeInYrs() {
		return ageInYrs;
	}
	public void setAgeInYrs(Integer ageInYrs) {
		this.ageInYrs = ageInYrs;
	}
	public Integer getWeight() {
		return weight;
	}
	public void setWeight(Integer weight) {
		this.weight = weight;
	}
	public Date getDateOfJoining() {
		return dateOfJoining;
	}
	public void setDateOfJoining(Date dateOfJoining) {
		this.dateOfJoining = dateOfJoining;
	}
	public String getQuarterOfJoining() {
		return quarterOfJoining;
	}
	public void setQuarterOfJoining(String quarterOfJoining) {
		this.quarterOfJoining = quarterOfJoining;
	}
	public String getHalfOfJoining() {
		return halfOfJoining;
	}
	public void setHalfOfJoining(String halfOfJoining) {
		this.halfOfJoining = halfOfJoining;
	}
	public Integer getYearOfJoining() {
		return yearOfJoining;
	}
	public void setYearOfJoining(Integer yearOfJoining) {
		this.yearOfJoining = yearOfJoining;
	}
	public Integer getMonthOfJoining() {
		return monthOfJoining;
	}
	public void setMonthOfJoining(Integer monthOfJoining) {
		this.monthOfJoining = monthOfJoining;
	}
	public String getMonthNameOfJoining() {
		return monthNameOfJoining;
	}
	public void setMonthNameOfJoining(String monthNameOfJoining) {
		this.monthNameOfJoining = monthNameOfJoining;
	}
	public String getShortMonth() {
		return shortMonth;
	}
	public void setShortMonth(String shortMonth) {
		this.shortMonth = shortMonth;
	}
	public Integer getDayOfJoining() {
		return dayOfJoining;
	}
	public void setDayOfJoining(Integer dayOfJoining) {
		this.dayOfJoining = dayOfJoining;
	}
	public String getDowOfJoining() {
		return dowOfJoining;
	}
	public void setDowOfJoining(String dowOfJoining) {
		this.dowOfJoining = dowOfJoining;
	}
	public String getShortDow() {
		return shortDow;
	}
	public void setShortDow(String shortDow) {
		this.shortDow = shortDow;
	}
	public Integer getSalary() {
		return salary;
	}
	public void setSalary(Integer salary) {
		this.salary = salary;
	}
	public String getLastHike() {
		return lastHike;
	}
	public void setLastHike(String lastHike) {
		this.lastHike = lastHike;
	}
	public String getSsn() {
		return ssn;
	}
	public void setSsn(String ssn) {
		this.ssn = ssn;
	}
	public String getPhoneNo() {
		return phoneNo;
	}
	public void setPhoneNo(String phoneNo) {
		this.phoneNo = phoneNo;
	}
	public String getPlaceName() {
		return placeName;
	}
	public void setPlaceName(String placeName) {
		this.placeName = placeName;
	}
	public String getCounty() {
		return county;
	}
	public void setCounty(String county) {
		this.county = county;
	}
	public String getCity() {
		return city;
	}
	public void setCity(String city) {
		this.city = city;
	}
	public String getState() {
		return state;
	}
	public void setState(String state) {
		this.state = state;
	}
	public Integer getZip() {
		return zip;
	}
	public void setZip(Integer zip) {
		this.zip = zip;
	}
	public String getRegion() {
		return region;
	}
	public void setRegion(String region) {
		this.region = region;
	}
	public String getUserName() {
		return userName;
	}
	public void setUserName(String userName) {
		this.userName = userName;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	public Boolean getIsDeleted() {
		return isDeleted;
	}
	public void setIsDeleted(Boolean isDeleted) {
		this.isDeleted = isDeleted;
	}
}


//6.Invoice.java
package bbsr.highradius.training.model.employee;

public class Invoice {
	public Integer pkInvoiceId;
	public Account fkAccountId;
	public String invoiceNumber;
	public String companyCode;
	public String fiscalyear;
	public String itemNumber;
	public Invoicetype fkInvoiceType;
	public Postingkey fkPostingKey;
	public Customer fkCustomerId;
	public double invoiceTotalAmount;
	public double invoiceDueAmount;
	public String invoiceCreateDate;
	public String dueDate;
	public Integer discount1Percentage;
	public Integer discount2Percentage;
	public Integer discount3Percentage;
	public String debitCreditIndicator;
	public Integer isOpen;
	public String approvalStatus;

	public Integer getPkInvoiceId() {
		return pkInvoiceId;
	}
	public void setPkInvoiceId(Integer pkInvoiceId) {
		this.pkInvoiceId = pkInvoiceId;
	}
	public Account getFkAccountId() {
		return fkAccountId;
	}
	public void setFkAccountId(Account fkAccountId) {
		this.fkAccountId = fkAccountId;
	}
	public String getInvoiceNumber() {
		return invoiceNumber;
	}
	public void setInvoiceNumber(String invoiceNumber) {
		this.invoiceNumber = invoiceNumber;
	}
	public String getCompanyCode() {
		return companyCode;
	}
	public void setCompanyCode(String companyCode) {
		this.companyCode = companyCode;
	}
	public String getFiscalyear() {
		return fiscalyear;
	}
	public void setFiscalyear(String fiscalyear) {
		this.fiscalyear = fiscalyear;
	}
	public String getItemNumber() {
		return itemNumber;
	}
	public void setItemNumber(String itemNumber) {
		this.itemNumber = itemNumber;
	}
	public Invoicetype getFkInvoiceType() {
		return fkInvoiceType;
	}
	public void setFkInvoiceType(Invoicetype fkInvoiceType) {
		this.fkInvoiceType = fkInvoiceType;
	}
	public Postingkey getFkPostingKey() {
		return fkPostingKey;
	}
	public void setFkPostingKey(Postingkey fkPostingKey) {
		this.fkPostingKey = fkPostingKey;
	}
	public Customer getFkCustomerId() {
		return fkCustomerId;
	}
	public void setFkCustomerId(Customer fkCustomerId) {
		this.fkCustomerId = fkCustomerId;
	}
	public double getInvoiceTotalAmount() {
		return invoiceTotalAmount;
	}
	public void setInvoiceTotalAmount(double invoiceTotalAmount) {
		this.invoiceTotalAmount = invoiceTotalAmount;
	}
	public double getInvoiceDueAmount() {
		return invoiceDueAmount;
	}
	public void setInvoiceDueAmount(double invoiceDueAmount) {
		this.invoiceDueAmount = invoiceDueAmount;
	}
	public String getInvoiceCreateDate() {
		return invoiceCreateDate;
	}
	public void setInvoiceCreateDate(String invoiceCreateDate) {
		this.invoiceCreateDate = invoiceCreateDate;
	}
	public String getDueDate() {
		return dueDate;
	}
	public void setDueDate(String dueDate) {
		this.dueDate = dueDate;
	}
	public Integer getDiscount1Percentage() {
		return discount1Percentage;
	}
	public void setDiscount1Percentage(Integer discount1Percentage) {
		this.discount1Percentage = discount1Percentage;
	}
	public Integer getDiscount2Percentage() {
		return discount2Percentage;
	}
	public void setDiscount2Percentage(Integer discount2Percentage) {
		this.discount2Percentage = discount2Percentage;
	}
	public Integer getDiscount3Percentage() {
		return discount3Percentage;
	}
	public void setDiscount3Percentage(Integer discount3Percentage) {
		this.discount3Percentage = discount3Percentage;
	}
	public String getDebitCreditIndicator() {
		return debitCreditIndicator;
	}
	public void setDebitCreditIndicator(String debitCreditIndicator) {
		this.debitCreditIndicator = debitCreditIndicator;
	}
	public Integer getIsOpen() {
		return isOpen;
	}
	public void setIsOpen(Integer isOpen) {
		this.isOpen = isOpen;
	}
	public String getApprovalStatus() {
		return approvalStatus;
	}
	public void setApprovalStatus(String approvalStatus) {
		this.approvalStatus = approvalStatus;
	}
}


//7.Invoicetype.java
package bbsr.highradius.training.model.employee;

public class Invoicetype {
	public Integer pkInvoiceTypeMapId;
	public Account fkAccountId;
	public String invoiceType;
	public String description;
	public Integer getPkInvoiceTypeMapId() {
		return pkInvoiceTypeMapId;
	}
	public void setPkInvoiceTypeMapId(Integer pkInvoiceTypeMapId) {
		this.pkInvoiceTypeMapId = pkInvoiceTypeMapId;
	}
	public Account getFkAccountId() {
		return fkAccountId;
	}
	public void setFkAccountId(Account fkAccountId) {
		this.fkAccountId = fkAccountId;
	}
	public String getInvoiceType() {
		return invoiceType;
	}
	public void setInvoiceType(String invoiceType) {
		this.invoiceType = invoiceType;
	}
	public String getDescription() {
		return description;
	}
	public void setDescription(String description) {
		this.description = description;
	}
}


//8.Postingkey.java
package bbsr.highradius.training.model.employee;

public class Postingkey {
	public Integer pkPostingKeyId;
	public Account fkAccountId;
	public String keyType;
	public Integer getPkPostingKeyId() {
		return pkPostingKeyId;
	}
	public void setPkPostingKeyId(Integer pkPostingKeyId) {
		this.pkPostingKeyId = pkPostingKeyId;
	}
	public Account getFkAccountId() {
		return fkAccountId;
	}
	public void setFkAccountId(Account fkAccountId) {
		this.fkAccountId = fkAccountId;
	}
	public String getKeyType() {
		return keyType;
	}
	public void setKeyType(String keyType) {
		this.keyType = keyType;
	}
	public String getDescription() {
		return description;
	}
	public void setDescription(String description) {
		this.description = description;
	}
	public String description;
}




// src/resources/mappings(hbm files)
//1.Account.hbm.xml
<?xml version = "1.0" encoding = "utf-8"?>
<!DOCTYPE hibernate-mapping PUBLIC 
"-//Hibernate/Hibernate Mapping DTD//EN"
"http://www.hibernate.org/dtd/hibernate-mapping-3.0.dtd">

<hibernate-mapping>
	<class name="bbsr.highradius.training.model.employee.Account" table="trn_account">

		

		<id name="accountId" 
            type="integer"
            column="account_id">
			<generator class="native" />
		</id>

		<property name="accountName" 
            column="account_name" 
            type="string" />
            
		
	</class>
</hibernate-mapping>


//2.Address.hbm.xml
<?xml version = "1.0" encoding = "utf-8"?>
<!DOCTYPE hibernate-mapping PUBLIC 
"-//Hibernate/Hibernate Mapping DTD//EN"
"http://www.hibernate.org/dtd/hibernate-mapping-3.0.dtd">

<hibernate-mapping>
	<class name="bbsr.highradius.training.model.employee.Address" table="trn_address">


		<id name="addressId" 
            type="integer"
            column="address_id">
			<generator class="native" />
		</id>

		<property name="line1" 
            column="line1" 
            type="string" />
            
        <property name="line2" 
            column="line2" 
            type="string" />
            
        <property name="street" 
            column="street" 
            type="string" />
            
        <property name="city" 
            column="city" 
            type="string" />
            
        <property name="zip" 
            column="zip" 
            type="string" />
            
        <property name="state" 
            column="state" 
            type="string" />
            
        <property name="country" 
            column="country" 
            type="string" />
		
	</class>
</hibernate-mapping>

//3.Customer.hbm.xml
<?xml version = "1.0" encoding = "utf-8"?>
<!DOCTYPE hibernate-mapping PUBLIC 
"-//Hibernate/Hibernate Mapping DTD//EN"
"http://www.hibernate.org/dtd/hibernate-mapping-3.0.dtd">

<hibernate-mapping>
	<class name="bbsr.highradius.training.model.employee.Customer" table="trn_customer">


		<id name="pkCustomerMapId" 
            type="integer"
            column="pk_customer_map_id">
			<generator class="native" />
		</id>

		<property name="customerNumber" 
            column="customer_number" 
            type="integer" />
            
        <property name="customerName" 
            column="customer_name" 
            type="string" />
            
        <property name="companyCode" 
            column="company_code" 
            type="string" />
            
		<many-to-one name="fkAccountId" column="fk_account_id" lazy="false"
        class="bbsr.highradius.training.model.employee.Account" not-null="true"/>
        
        <many-to-one name="fkCustomerType" column="fk_customer_type" lazy="false"
        class="bbsr.highradius.training.model.employee.Customertype" not-null="true"/>
        
        <many-to-one name="fkAddressId" column="fk_address_id" lazy="false" 
        class="bbsr.highradius.training.model.employee.Address" not-null="true"/>
        
	</class>
</hibernate-mapping>

//4.CustomerType.hbm.xml
<?xml version = "1.0" encoding = "utf-8"?>
<!DOCTYPE hibernate-mapping PUBLIC 
"-//Hibernate/Hibernate Mapping DTD//EN"
"http://www.hibernate.org/dtd/hibernate-mapping-3.0.dtd">

<hibernate-mapping>
	<class name="bbsr.highradius.training.model.employee.Customertype" table="trn_customer_type">


		<id name="pkCustomerTypeId" 
            type="integer"
            column="pk_customer_type_id">
			<generator class="native" />
		</id>

		<property name="customerType" 
            column="customer_type" 
            type="string" />
            
        <property name="description" 
            column="description" 
            type="string" />
            
        
            
		<many-to-one name="fkAccountId" column="fk_account_id" lazy="false"
        class="bbsr.highradius.training.model.employee.Account" not-null="true"/>
        
        
        
	</class>
</hibernate-mapping>

//5.EmployeeDetails.hbm.xml
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE hibernate-mapping PUBLIC "-//Hibernate/Hibernate Mapping DTD 3.0//EN" "http://hibernate.sourceforge.net/hibernate-mapping-3.0.dtd">

<hibernate-mapping>
  <class name="bbsr.highradius.training.model.employee.EmployeeDetails" table="employee_details" where="is_deleted = 0">
    <id name="pkId" type="int">
      <column name="pk_id"/>
      <generator class="identity"/>
    </id>
    <property name="employeeId" type="int">
      <column name="emp_id"/>
    </property>
    <property name="namePrefix" type="string">
      <column name="name_prefix"/>
    </property>
    <property name="firstName" type="string">
      <column name="first_name"/>
    </property>
    <property name="middleName" type="string">
      <column name="middle_name"/>
    </property>
    <property name="lastName" type="string">
      <column name="last_name"/>
    </property>
    <property name="gender" type="string">
      <column name="gender"/>
    </property>
    <property name="email" type="string">
      <column name="email"/>
    </property>
    <property name="fatherName" type="string">
      <column name="father_name"/>
    </property>
    <property name="motherName" type="string">
      <column name="mother_name"/>
    </property>
    <property name="motherMaidenName" type="string">
      <column name="mother_maiden_name"/>
    </property>
    <property name="dateOfBirth" type="timestamp">
      <column name="date_of_birth"/>
    </property>
    <property name="ageInYrs" type="int">
      <column name="age_in_yrs"/>
    </property>
    <property name="weight" type="int">
      <column name="weight"/>
    </property>
    <property name="dateOfJoining" type="timestamp">
      <column name="date_of_joining"/>
    </property>
    <property name="quarterOfJoining" type="string">
      <column name="quarter_of_joining"/>
    </property>
    <property name="halfOfJoining" type="string">
      <column name="half_of_joining"/>
    </property>
    <property name="yearOfJoining" type="int">
      <column name="year_of_joining"/>
    </property>
    <property name="monthOfJoining" type="int">
      <column name="month_of_joining"/>
    </property>
    <property name="monthNameOfJoining" type="string">
      <column name="month_name_of_joining"/>
    </property>
    <property name="shortMonth" type="string">
      <column name="short_month"/>
    </property>
    <property name="dayOfJoining" type="int">
      <column name="day_of_joining"/>
    </property>
    <property name="dowOfJoining" type="string">
      <column name="dow_of_joining"/>
    </property>
    <property name="shortDow" type="string">
      <column name="short_dow"/>
    </property>
    <property name="salary" type="int">
      <column name="salary"/>
    </property>
    <property name="lastHike" type="string">
      <column name="last_hike"/>
    </property>
    <property name="ssn" type="string">
      <column name="ssn"/>
    </property>
    <property name="phoneNo" type="string">
      <column name="phone_no"/>
    </property>
    <property name="placeName" type="string">
      <column name="place_name"/>
    </property>
    <property name="county" type="string">
      <column name="county"/>
    </property>
    <property name="city" type="string">
      <column name="city"/>
    </property>
    <property name="state" type="string">
      <column name="state"/>
    </property>
    <property name="zip" type="int">
      <column name="zip"/>
    </property>
    <property name="region" type="string">
      <column name="region"/>
    </property>
    <property name="userName" type="string">
      <column name="user_name"/>
    </property>
    <property name="password" type="string">
      <column name="password"/>
    </property>
    <property name="isDeleted" type="java.lang.Boolean">
      <column name="is_deleted"/>
    </property>
  </class>
</hibernate-mapping>

//6.Invoice.hbm.xml
<?xml version = "1.0" encoding = "utf-8"?>
<!DOCTYPE hibernate-mapping PUBLIC 
"-//Hibernate/Hibernate Mapping DTD//EN"
"http://www.hibernate.org/dtd/hibernate-mapping-3.0.dtd">

<hibernate-mapping>
	<class name="bbsr.highradius.training.model.employee.Invoice" table="trn_invoice">


		<id name="pkInvoiceId" 
            type="integer"
            column="pk_invoice_id">
			<generator class="native" />
		</id>

		<many-to-one name="fkAccountId" column="fk_account_id" lazy="false"
        class="bbsr.highradius.training.model.employee.Account" not-null="true"/>
        
        <property name="invoiceNumber" 
            column="invoice_number" 
            type="string" />
            
        <property name="companyCode" 
            column="company_code" 
            type="string" />
            
        <property name="fiscalyear" 
            column="fiscal_year" 
            type="string" />
            
        <property name="itemNumber" 
            column="item_number" 
            type="string" />
            
        <many-to-one name="fkInvoiceType" column="fk_invoice_type" lazy="false"
        class="bbsr.highradius.training.model.employee.Invoicetype" not-null="true"/>
        
        <many-to-one name="fkPostingKey" column="fk_posting_key" lazy="false"
        class="bbsr.highradius.training.model.employee.Postingkey" not-null="true"/>
        
        <many-to-one name="fkCustomerId" column="fk_customer_id" lazy="false"
        class="bbsr.highradius.training.model.employee.Customer" not-null="true"/>
        
        <property name="invoiceTotalAmount" 
            column="invoice_total_amount" 
            type="double" />
            
        <property name="invoiceDueAmount" 
            column="invoice_due_amount" 
            type="double" />
            
        <property name="invoiceCreateDate" 
            column="invoice_created_date" 
            type="string" />
            
         <property name="dueDate" 
            column="due_date" 
            type="string" />
            
         <property name="discount1Percentage" 
            column="discount_1_percentage" 
            type="integer" />
            
         <property name="discount2Percentage" 
            column="discount_2_percentage" 
            type="integer" />
            
         <property name="discount3Percentage" 
            column="discount_3_percentage" 
            type="integer" />
        
        <property name="debitCreditIndicator" 
            column="debit_credit_indicator" 
            type="string" />
            
        <property name="isOpen" 
            column="is_open" 
            type="integer" />
            
        <property name="approvalStatus" 
            column="approval_status" 
            type="string" />
            
        
            
	</class>
</hibernate-mapping>

//7.Invoicetype.hbm.xml
<?xml version = "1.0" encoding = "utf-8"?>
<!DOCTYPE hibernate-mapping PUBLIC 
"-//Hibernate/Hibernate Mapping DTD//EN"
"http://www.hibernate.org/dtd/hibernate-mapping-3.0.dtd">

<hibernate-mapping>
	<class name="bbsr.highradius.training.model.employee.Invoicetype" table="trn_invoice_type">


		<id name="pkInvoiceTypeMapId" 
            type="integer"
            column="pk_invoice_type_map_id">
			<generator class="native" />
		</id>

		<many-to-one name="fkAccountId" column="fk_account_id" lazy="false"
        class="bbsr.highradius.training.model.employee.Account" not-null="true"/>
        
        <property name="invoiceType" 
            column="invoice_type" 
            type="string" />
            
        <property name="description" 
            column="description" 
            type="string" />
        
            
	</class>
</hibernate-mapping>

//8.Postingkey.hbm.xml
<?xml version = "1.0" encoding = "utf-8"?>
<!DOCTYPE hibernate-mapping PUBLIC 
"-//Hibernate/Hibernate Mapping DTD//EN"
"http://www.hibernate.org/dtd/hibernate-mapping-3.0.dtd">

<hibernate-mapping>
	<class name="bbsr.highradius.training.model.employee.Invoicetype" table="trn_invoice_type">


		<id name="pkInvoiceTypeMapId" 
            type="integer"
            column="pk_invoice_type_map_id">
			<generator class="native" />
		</id>

		<many-to-one name="fkAccountId" column="fk_account_id" lazy="false"
        class="bbsr.highradius.training.model.employee.Account" not-null="true"/>
        
        <property name="invoiceType" 
            column="invoice_type" 
            type="string" />
            
        <property name="description" 
            column="description" 
            type="string" />
        
            
	</class>
</hibernate-mapping>


################## Action ,dao, daoImpl,Manager,ManagerImpl###############
//com.highradius.training.action
//1.OpenInvoiceAction

package com.highradius.training.action;

import java.util.HashMap;
import java.util.Map;

import com.google.gson.Gson;
import com.highradius.common.util.HRCLog;
import com.highradius.common.util.HRCLogFactory;
import com.highradius.training.manager.InvoiceDetailsManager;
import com.receivablesradius.deductions.action.BaseAction;
import com.receivablesradius.deductions.constants.JSONRowResult;
import com.receivablesradius.deductions.manager.impl.AdvanceSearchQueryHelperManagerImpl;

import bbsr.highradius.training.model.employee.Account;
import bbsr.highradius.training.model.employee.Customer;
import bbsr.highradius.training.model.employee.Invoicetype;
import bbsr.highradius.training.model.employee.Postingkey;

public class OpenInvoiceAction extends BaseAction{
	
	private static final HRCLog LOGGER = HRCLogFactory.getLog(EmployeeDetailsAction.class);
	
	private InvoiceDetailsManager invoiceDetailsManager;
	
	public Integer pkInvoiceId;
	public Account fkAccountId;
	public String invoiceNumber;
	public String companyCode;
	public String fiscalyear;
	public String itemNumber;
	public Invoicetype fkInvoiceType;
	public Postingkey fkPostingKey;
	public Customer fkCustomerId;
	public double invoiceTotalAmount;
	public double invoiceDueAmount;
	public String invoiceCreateDate;
	public String dueDate;
	public Integer discount1Percentage;
	public Integer discount2Percentage;
	public Integer discount3Percentage;
	public String debitCreditIndicator;
	public Integer isOpen;
	public String approvalStatus;
	
	private String query;
	
	public String getQuery() {
		return query;
	}
	public void setQuery(String query) {
		this.query = query;
	}
	

	public InvoiceDetailsManager getInvoiceDetailsManager() {
		return invoiceDetailsManager;
	}
	public Integer getPkInvoiceId() {
		return pkInvoiceId;
	}
	public void setPkInvoiceId(Integer pkInvoiceId) {
		this.pkInvoiceId = pkInvoiceId;
	}
	public Account getFkAccountId() {
		return fkAccountId;
	}
	public void setFkAccountId(Account fkAccountId) {
		this.fkAccountId = fkAccountId;
	}
	public String getInvoiceNumber() {
		return invoiceNumber;
	}
	public void setInvoiceNumber(String invoiceNumber) {
		this.invoiceNumber = invoiceNumber;
	}
	public String getCompanyCode() {
		return companyCode;
	}
	public void setCompanyCode(String companyCode) {
		this.companyCode = companyCode;
	}
	public String getFiscalyear() {
		return fiscalyear;
	}
	public void setFiscalyear(String fiscalyear) {
		this.fiscalyear = fiscalyear;
	}
	public String getItemNumber() {
		return itemNumber;
	}
	public void setItemNumber(String itemNumber) {
		this.itemNumber = itemNumber;
	}
	public Invoicetype getFkInvoiceType() {
		return fkInvoiceType;
	}
	public void setFkInvoiceType(Invoicetype fkInvoiceType) {
		this.fkInvoiceType = fkInvoiceType;
	}
	public Postingkey getFkPostingKey() {
		return fkPostingKey;
	}
	public void setFkPostingKey(Postingkey fkPostingKey) {
		this.fkPostingKey = fkPostingKey;
	}
	public Customer getFkCustomerId() {
		return fkCustomerId;
	}
	public void setFkCustomerId(Customer fkCustomerId) {
		this.fkCustomerId = fkCustomerId;
	}
	public double getInvoiceTotalAmount() {
		return invoiceTotalAmount;
	}
	public void setInvoiceTotalAmount(double invoiceTotalAmount) {
		this.invoiceTotalAmount = invoiceTotalAmount;
	}
	public double getInvoiceDueAmount() {
		return invoiceDueAmount;
	}
	public void setInvoiceDueAmount(double invoiceDueAmount) {
		this.invoiceDueAmount = invoiceDueAmount;
	}
	public String getInvoiceCreateDate() {
		return invoiceCreateDate;
	}
	public void setInvoiceCreateDate(String invoiceCreateDate) {
		this.invoiceCreateDate = invoiceCreateDate;
	}
	public String getDueDate() {
		return dueDate;
	}
	public void setDueDate(String dueDate) {
		this.dueDate = dueDate;
	}
	public Integer getDiscount1Percentage() {
		return discount1Percentage;
	}
	public void setDiscount1Percentage(Integer discount1Percentage) {
		this.discount1Percentage = discount1Percentage;
	}
	public Integer getDiscount2Percentage() {
		return discount2Percentage;
	}
	public void setDiscount2Percentage(Integer discount2Percentage) {
		this.discount2Percentage = discount2Percentage;
	}
	public Integer getDiscount3Percentage() {
		return discount3Percentage;
	}
	public void setDiscount3Percentage(Integer discount3Percentage) {
		this.discount3Percentage = discount3Percentage;
	}
	public String getDebitCreditIndicator() {
		return debitCreditIndicator;
	}
	public void setDebitCreditIndicator(String debitCreditIndicator) {
		this.debitCreditIndicator = debitCreditIndicator;
	}
	public Integer getIsOpen() {
		return isOpen;
	}
	public void setIsOpen(Integer isOpen) {
		this.isOpen = isOpen;
	}
	public String getApprovalStatus() {
		return approvalStatus;
	}
	public void setApprovalStatus(String approvalStatus) {
		this.approvalStatus = approvalStatus;
	}
	public void setInvoiceDetailsManager(InvoiceDetailsManager invoiceDetailsManager) {
		this.invoiceDetailsManager = invoiceDetailsManager;
	}
	public String getInvoiceDetails() {
		LOGGER.debug("Inside getInvoiceDetails() called from InvoiceDetailsManager");
		//LOGGER.debug("Searched Name :"+firstName+" Employee ID : "+employeeId);
		AdvanceSearchQueryHelperManagerImpl advanceSearchQueryHelperManagerImpl = new AdvanceSearchQueryHelperManagerImpl();
		String advanceSearchWhereQuery = advanceSearchQueryHelperManagerImpl.massageQuery(null,query);
		Map<String, Object> invoiceDetailsMap = new HashMap<>();
		JSONRowResult result = new JSONRowResult();
		try {
			invoiceDetailsMap = invoiceDetailsManager.getInvoiceDetails(advanceSearchWhereQuery, getStartIndex(), getRowsToFetch());
			//null check to avoid null pointer exception
			if(invoiceDetailsMap != null) {
				result.results = invoiceDetailsMap.get("count");
				result.rows = invoiceDetailsMap.get("rows");
			}
		}
		catch (Exception e) {
			LOGGER.error("Error inside getInvoiceDetails :",e);
			return ERROR;
		}
		Gson gson = new Gson();
		String jsonResult = gson.toJson(result);
		setOutput(jsonResult);
		return SUCCESS;
	}
}


//com.highradius.training.dao
//1.InvoiceDetailsDao.java(java interface)
package com.highradius.training.dao;

import java.util.Map;

//import bbsr.highradius.training.model.employee.EmployeeDetails;

public interface InvoiceDetailsDao {
	
	Map<String, Object> getInvoiceDetails(String advanceSearchWhereQuery, Integer startIndex, Integer rowsToFetch);
	//boolean addNewEmployeeDetails(EmployeeDetails employeeObj);

}



//com.highradius.training.dao.impl
//1.InvoiceDetailsDaoImpl.java(java class)
package com.highradius.training.dao.impl;



import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import org.apache.cxf.common.util.StringUtils;
import org.hibernate.Query;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.springframework.orm.hibernate5.HibernateTemplate;

import com.highradius.common.util.HRCLog;
import com.highradius.common.util.HRCLogFactory;
//import com.highradius.training.dao.EmployeeDetailsDao;
import com.highradius.training.dao.InvoiceDetailsDao;

//import bbsr.highradius.training.model.employee.EmployeeDetails;

public class InvoiceDetailsDaoImpl implements InvoiceDetailsDao{
	
	private static final HRCLog LOGGER = HRCLogFactory.getLog(InvoiceDetailsDaoImpl.class);
	private SessionFactory sessionFactory;
	private HibernateTemplate hibernateTemplate;

	public SessionFactory getSessionFactory() {
		return sessionFactory;
	}

	public void setSessionFactory(SessionFactory sessionFactory) {
		this.sessionFactory = sessionFactory;
		this.hibernateTemplate = new HibernateTemplate(sessionFactory);
	}

	@Override
	public Map<String, Object> getInvoiceDetails(String advanceSearchWhereQuery, Integer startIndex, Integer rowsToFetch) {
		LOGGER.debug("Inside getInvoiceDetails() method called from InvoiceDetailsDaoImpl");
		StringBuffer query = new StringBuffer("FROM Invoice WHERE ");
		if (!StringUtils.isEmpty(advanceSearchWhereQuery)) {
			query.append(advanceSearchWhereQuery);
		} else {
			//query.append("isDeleted = 0");
			query = new StringBuffer("FROM Invoice");
		}
		System.out.println(query);
		LOGGER.debug("Query : " + query.toString());
		try {
			return getRowsAndCountForQuery(query.toString(), startIndex, rowsToFetch, true);
		} catch (Exception e) {
			LOGGER.error("Error in getInvoiceDetails()", e);
		}
		return null;
	}
	
	//@Override
	/*public boolean addNewEmployeeDetails(EmployeeDetails employeeObj) {
		LOGGER.debug("Inside addNewEmployeeDetails() method called from EmployeeDetailsDaoImpl");
		try {
			getSession().saveOrUpdate(employeeObj);
			return true;
		} catch (Exception e) {
			LOGGER.error("Error while saving entry : ",e);
		}
		return false;	
	}*/
	
	protected Map<String, Object> getRowsAndCountForQuery(String intialQuery, int startIndex, int rowsToFetch, boolean isPaginated) {

		List rows = getRowsForQuery(intialQuery, startIndex, rowsToFetch, isPaginated);
		int count = getRowCountForQuery(intialQuery);

		Map<String, Object> resultMap = new HashMap<String, Object>();
		resultMap.put("rows", rows);
		resultMap.put("count", count);
		return resultMap;
	}
	
	protected List getRowsForQuery(String intialQuery, int startIndex, int rowsToFetch, boolean isPaginated) {
		LOGGER.debug("Query is: " + intialQuery);
		Query query = getSession().createQuery(intialQuery);

		if (isPaginated) {
			LOGGER.debug(
					"limiting rows as isPaginated is true. startIndex: " + startIndex + " rowsToFetch: " + rowsToFetch);
			query.setFirstResult(startIndex);
			query.setMaxResults(rowsToFetch);
		}
		LOGGER.debug("Before Executing Query " + query.toString());
		List list = query.list();
		// AcctDocHeader acc1 = (AcctDocHeader)list.get(0);
		LOGGER.debug("After Executing Query ");
		return list;
	}
	
	private Session getSession() {
		return hibernateTemplate.getSessionFactory().getCurrentSession();
	}

	protected int getRowCountForQuery(String intialQuery) {
		int rowCount = 0;
		try {
			String countQuery = "select count(*) as count " + removeSelectNOrderByClause(intialQuery);
			LOGGER.debug("CountQuery is: " + countQuery);
			
			Query query = getSession().createQuery(countQuery);
			Object resultCount = (Object) query.list().get(0);
			rowCount = Integer.parseInt(String.valueOf(resultCount));
		}
		catch (Exception e){
			LOGGER.error(e);
		}
		
		LOGGER.debug("Count returned is: " + rowCount);
		return rowCount;
	}
	
	protected static String removeSelectNOrderByClause(String initialQuery){
		String finalQuery=initialQuery;
		finalQuery = removeSelectQuery(finalQuery);
		finalQuery = removeOrderByClause(finalQuery);
		return finalQuery;
	}
	
	private static String removeSelectQuery(String initialQuery){
		String finalQuery = initialQuery;
		 Pattern p = Pattern.compile("\\s*select.*\\s+from\\s+(.*)", Pattern.CASE_INSENSITIVE);
		  Matcher m = p.matcher(finalQuery);
		  if(m.matches()){
			  if(m.group(1).length()!=0){
				  finalQuery = " from " + m.group(1);
			  }
		  }
		return finalQuery;
	}
	
	private static String removeOrderByClause(String intialQuery) {
		int index = intialQuery.toLowerCase().indexOf("order by");
		if(index != -1){
			return intialQuery.substring(0, index);
		}
		return intialQuery;
	}

}



//com.highradius.training.manager
//1.InvoiceDetailsManager.java(java interface)
package com.highradius.training.manager;



import java.util.Map;
//import bbsr.highradius.training.model.employee.EmployeeDetails;

public interface InvoiceDetailsManager {

	Map<String, Object> getInvoiceDetails(String advanceSearchWhereQuery, Integer start, Integer limit);
	//boolean addNewEmployeeDetails(EmployeeDetails employeeObj);
	
}



//com.highradius.training.manager.impl
//1.InvoiceDetailsManagerImpl.java(java class)
package com.highradius.training.manager.impl;



import java.util.Map;

import com.highradius.common.util.HRCLog;
import com.highradius.common.util.HRCLogFactory;
//import com.highradius.training.dao.EmployeeDetailsDao;
import com.highradius.training.dao.InvoiceDetailsDao;
//import com.highradius.training.manager.EmployeeDetailsManager;
import com.highradius.training.manager.InvoiceDetailsManager;

//import bbsr.highradius.training.model.employee.EmployeeDetails;

public class InvoiceDetailsManagerImpl implements InvoiceDetailsManager{
	
	private static final HRCLog LOGGER = HRCLogFactory.getLog(InvoiceDetailsManagerImpl.class);
	
	private InvoiceDetailsDao invoiceDetailsDao;

	public InvoiceDetailsDao getInvoiceDetailsDao() {
		return invoiceDetailsDao;
	}

	public void setInvoiceDetailsDao(InvoiceDetailsDao invoiceDetailsDao) {
		this.invoiceDetailsDao = invoiceDetailsDao;
	}

	@Override
	public Map<String, Object> getInvoiceDetails(String advanceSearchWhereQuery, Integer start, Integer limit) {
		LOGGER.debug("Inside getInvoiceDetails() called from invoiceDetailsmanagerImpl");
		return invoiceDetailsDao.getInvoiceDetails(advanceSearchWhereQuery, start, limit);
	}
	
	/*@Override
	public boolean addNewEmployeeDetails(EmployeeDetails employeeObj) {
		return employeeDetailsDao.addNewEmployeeDetails(employeeObj);
	}*/
	


}





