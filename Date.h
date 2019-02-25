#ifndef DATE_H
#define DATE_H

#define MONTHS 12

#include <iostream>
#include <string>

/**
 * @brief 
 * 
 * 
 * 
 * 21/02/2018 : Ajout des fonctions amies pour la commutativité
 * 
 * 
 * A changer les fonctions dériviées de comparaisons
 */
class Date
{
    public:

        enum class Month{JANVIER,FEVRIER,MARS,AVRIL,MAI,JUIN,JUILLET,AOUT,SEPTEMBRE,OCTOBRE,NOVEMBRE,DECEMBRE};

        /**
         * @brief Construct a new Date object (Default constructor)
         * 
         */
        Date();

        /**
         * @brief Construct a new Date object
         * 
         * @param day 
         * @param month 
         * @param year 
         */
        Date(unsigned day,unsigned month,unsigned year);

        /**
         * @brief Construct a new Date object
         * 
         * @param day 
         * @param month 
         * @param year 
         */
        Date(unsigned day, Month month, unsigned year);


        /******Muttateurs********/
        
        /**
         * @brief Set the Day object
         * 
         * @param day 
         */
        void setDay(unsigned day);

        /**
         * @brief Set the Month object
         * 
         * @param month 
         */
        void setMonth(unsigned month);

        /**
         * @brief Set the Month object
         * 
         * @param month 
         */
        void setMonth(std::string month);

        /**
         * @brief Set the Month object
         * 
         * @param month 
         */
        void setMonth(Month month);

        /**
         * @brief Set the Year object
         * 
         * @param year 
         */
        void setYear(unsigned year);

        /******Accesseurs*******/
        
        /**
         * @brief Get the Day object
         * 
         * @return unsigned 
         */
        unsigned getDay() const;

        /**
         * @brief Get the Month object
         * 
         * @return unsigned 
         */
        unsigned getMonth( ) const;

        /**
         * @brief Get the Month String object
         * 
         * @return string 
         */
        std::string getMonthString() const;

        /**
         * @brief Get the Month Enum object
         * 
         * @return Month 
         */
        Month getMonthEnum() const;

        /**
         * @brief Get the Year object
         * 
         * @return unsigned 
         */
        unsigned getYear() const;

        /**
         * @brief display date as dd.mm.yyyy
         * 
         * @param date 
         * 
         * @return ostream
         */
        friend std::ostream &operator<<(std::ostream& os,const Date& date);

        /**
         * @brief inputs a date dd.mm.yyyy
         * 
         * @param date 
         * 
         * @return istream
         */
        friend std::istream &operator>>(std::istream& is,const std::string& date);

        /**
         * @brief compare two dates
         * 
         * @param date 
         * @return true 
         * @return false 
         */
        bool operator>( const Date& date)const;

        /**
         * @brief Compare two dates
         * 
         * @param date 
         * @return true 
         * @return false 
         */
        bool operator<(const Date& date)const;

        /**
         * @brief Compare two dates
         * 
         * @param date 
         * @return true 
         * @return false 
         */
        bool operator>=(const Date& date)const;

        /**
         * @brief Compare two dates
         * 
         * @param date 
         * @return true 
         * @return false 
         */
        bool operator<=(const Date& date)const;

        /**
         * @brief Compare two dates
         * 
         * @param date 
         * @return true 
         * @return false 
         */
        bool operator==(const Date& date)const;

        /**
         * @brief adds an amount of days to the date
         * 
         * @param val 
         * @return Date 
         */
        Date operator+(int val);
        friend Date operator+(int val, const Date& date);

        /**
         * @brief Substract an amount of days to the date
         * 
         * @param val 
         * @return Date 
         */
        Date operator-(int val);

        /**
         * @brief affect a new Date to a date
         * 
         * @param date 
         * @return Date 
         */
        Date operator=(const Date& date);

        /**
         * @brief Add one day to a day
         * 
         * @return Date 
         */
        Date &operator++(int);

        /**
         * @brief substract one day to a day
         * 
         * @return Date 
         */
        Date &operator--(int);


    private:

       /**
         * @brief Contains all the algorithmic to add days to a date
         * 
         * @param val amount of days to be added to the date
         */
        void addDay(int val);

        void substractDay(int val);

        void calculateDay(char operation);

        /**
         * @brief Insert date in tho the month string array
         * 
         */
        void createMonthString();

        /**
         * @brief Needed to check if the date is valid
         * 
         * @return true 
         * @return false 
         */
        bool isCorrect() const;

        /**
         * @brief Determines if a year bissextile or not
         * 
         * @param year 
         * @return true 
         * @return false 
         */
        bool isBissextile(int year);

        /**
         * @brief Get the Num Days In Month object
         * 
         * @param month 
         * @return int 
         */
        int getNumDaysInMonth(Month month);
        
        /**
         * @brief An array of strings containing the string value of the monthts
         * 
         */
        std::string m_stringMonth[MONTHS];

        /**
         * @brief day of the date
         * 
         */
        unsigned int m_day;

        /**
         * @brief month of the date
         * 
         */
        unsigned int m_month;

        /**
         * @brief year of the date
         * 
         */
        unsigned int m_year;

       /**
         * @brief defines if a date is correct
         * 
         */
        bool m_correct;
};

#endif //DATE_H