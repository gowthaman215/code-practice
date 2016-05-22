#ifndef SOAP_TYPE_ns1__getCustomerBankList 
#define SOAP_TYPE_ns1__getCustomerBankList (18) /* ns1:getCustomerBankList */ 
class SOAP_CMAC ns1__getCustomerBankList 
{ 
    public: 
    class ns1__onlineCustomerBankListRequest *req;   
     /* optional element of type ns1:onlineCustomerBankListRequest */ 
     struct soap *soap; /* transient */
      public: virtual int soap_type() const { return 18; } /* = unique id SOAP_TYPE_ns1__getCustomerBankList */
       virtual void soap_default(struct soap*); 
       virtual void soap_serialize(struct soap*) const; virtual int soap_put(struct soap*, const char*, const char*) const; 
       virtual int soap_out(struct soap*, const char*, int, const char*) const; 
       virtual void *soap_get(struct soap*, const char*, const char*);
        virtual void *soap_in(struct soap*, const char*, const char*); 
        ns1__getCustomerBankList() { ns1__getCustomerBankList::soap_default(NULL); 
        } 
        virtual ~ns1__getCustomerBankList() { }
         };
 #endif

#ifndef SOAP_TYPE_ns1__onlineCustomerBankListRequest 
#define SOAP_TYPE_ns1__onlineCustomerBankListRequest (19) /* ns1:onlineCustomerBankListRequest */
 class SOAP_CMAC ns1__onlineCustomerBankListRequest { 
     public: 
     std::string *login; /* optional element of type xsd:string */ 
     std::string *msisdn;  /* optional element of type xsd:string */ 
     std::string *password;    /* optional element of type xsd:string */ 
     struct soap *soap;    /* transient */
      public:
       virtual int soap_type() const { return 19; } /* = unique id SOAP_TYPE_ns1__onlineCustomerBankListRequest */
        virtual void soap_default(struct soap*); 
        virtual void soap_serialize(struct soap*) const; 
        virtual int soap_put(struct soap*, const char*, const char*) const; 
        virtual int soap_out(struct soap*, const char*, int, const char*) const; 
        virtual void *soap_get(struct soap*, const char*, const char*);
         virtual void *soap_in(struct soap*, const char*, const char*); ns1__onlineCustomerBankListRequest() { ns1__onlineCustomerBankListRequest::soap_default(NULL); 
         } 
         virtual ~ns1__onlineCustomerBankListRequest() { } 
         }; 
         #endif









#ifndef SOAP_TYPE_ns1__getCustomerBankListResponse 
#define SOAP_TYPE_ns1__getCustomerBankListResponse (20)
 /* ns1:getCustomerBankListResponse */ class SOAP_CMAC ns1__getCustomerBankListResponse { public: 
 class ns1__onlineCustomerBankListResult *return_;  
  /* SOAP 1.2 RPC return element (when namespace qualified) */    /* optional element of type ns1:onlineCustomerBankListResult */ 
  struct soap *soap;  /* transient */
   public: 
   virtual int soap_type() const { return 20; } 
   /* = unique id SOAP_TYPE_ns1__getCustomerBankListResponse */ 
   virtual void soap_default(struct soap*);
   virtual void soap_serialize(struct soap*) const;
    virtual int soap_put(struct soap*, const char*, const char*) const; 
    virtual int soap_out(struct soap*, const char*, int, const char*) const;
     virtual void *soap_get(struct soap*, const char*, const char*);
      virtual void *soap_in(struct soap*, const char*, const char*);
       ns1__getCustomerBankListResponse() { ns1__getCustomerBankListResponse::soap_default(NULL); } 
       virtual ~ns1__getCustomerBankListResponse() { } 
};
 #endif
