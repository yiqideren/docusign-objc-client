#import <Foundation/Foundation.h>
#import "DSLoginInformation.h"
#import "DSErrorDetails.h"
#import "DSObject.h"
#import "DSApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */
 


/**
 * 
 */
 

@interface DSAuthenticationApi_LoginOptions : DSObject
/*
 * loginSettings Determines whether login settings are returned in the response.\n\nValid Values:\n\n* all -  All the login settings are returned. \n* none - no login settings are returned.
 */
@property NSString* loginSettings;
/*
 * apiPassword When set to **true**, shows the account API password in the response.
 */
@property NSString* apiPassword;
/*
 * includeAccountIdGuid When set to **true**, shows the account ID GUID in the response.
 */
@property NSString* includeAccountIdGuid;

@end


 
@interface DSAuthenticationApi: NSObject

@property(nonatomic, assign)DSApiClient *apiClient;

-(instancetype) initWithApiClient:(DSApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(DSAuthenticationApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(DSAuthenticationApi*) sharedAPI;

///
///
/// Gets login information for a specified user.
/// Retrieves login information for a specified user. Each account that is associated with the login credentials is listed. You can use the returned information to determine whether a user is authenticated and select an account to use in future operations.  \n\nThe `baseUrl` property, returned in the response, is used in all future API calls as the base of the request URL. The `baseUrl` property contains the DocuSign server, the API version, and the `accountId` property that is used for the login. This request uses your DocuSign credentials to retrieve the account information.
///
///
///
/// @param DSAuthenticationApi_LoginOptions  Options for modifying the request.
/// @return DSLoginInformation*

-(NSNumber*) loginWithCompletionBlock : 
     
    (void (^)(DSLoginInformation* output, NSError* error))completionBlock;
    




///
///
/// Gets login information for a specified user.
/// Retrieves login information for a specified user. Each account that is associated with the login credentials is listed. You can use the returned information to determine whether a user is authenticated and select an account to use in future operations.  \n\nThe `baseUrl` property, returned in the response, is used in all future API calls as the base of the request URL. The `baseUrl` property contains the DocuSign server, the API version, and the `accountId` property that is used for the login. This request uses your DocuSign credentials to retrieve the account information.
///
///
///
/// @param DSAuthenticationApi_LoginOptions  Options for modifying the request.
/// @return DSLoginInformation*

-(NSNumber*) loginWithCompletionBlock : 
     
    (DSAuthenticationApi_LoginOptions*) options
    
    completionHandler: (void (^)(DSLoginInformation* output, NSError* error))completionBlock;
    


	
	

@end
