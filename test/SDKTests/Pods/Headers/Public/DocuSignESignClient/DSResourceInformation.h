#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSNameValue.h"


@protocol DSResourceInformation
@end

@interface DSResourceInformation : DSObject

/*  [optional]
 */
@property(nonatomic) NSArray<DSNameValue>* resources;

@end