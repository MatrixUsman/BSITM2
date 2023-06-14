package com.usman.bsit_m2_20_48;


public class User {
    private String userId;
    private String fullName;
    private String email;
    private String city;
    private String contactNumber;

    public User() {
        // Default constructor required for Firebase
    }

    public User(String userId, String fullName, String email, String city, String contactNumber) {
        this.userId = userId;
        this.fullName = fullName;
        this.email = email;
        this.city = city;
        this.contactNumber = contactNumber;
    }

    public String getUserId() {
        return userId;
    }

    public String getFullName() {
        return fullName;
    }

    public String getEmail() {
        return email;
    }

    public String getCity() {
        return city;
    }

    public String getContactNumber() {
        return contactNumber;
    }
}
