#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSSignerAttachment.h"
#import "DSCompany.h"
#import "DSFirstName.h"
#import "DSNote.h"
#import "DSEmail.h"
#import "DSRadioGroup.h"
#import "DSDateSigned.h"
#import "DSSignHere.h"
#import "DSInitialHere.h"
#import "DSDecline.h"
#import "DSTitle.h"
#import "DSList.h"
#import "DSFormulaTab.h"
#import "DSCheckbox.h"
#import "DSFullName.h"
#import "DSZip.h"
#import "DSSsn.h"
#import "DSApprove.h"
#import "DSLastName.h"
#import "DSEmailAddress.h"
#import "DSText.h"
#import "DSEnvelopeId.h"


@protocol DSTemplateTabs
@end

@interface DSTemplateTabs : DSObject

/* A complex type the contains information about the tag that specifies where the recipient places their signature in the document. The \"optional\" parameter sets if the signature is required or optional. [optional]
 */
@property(nonatomic) NSArray<DSSignHere>* signHereTabs;
/* Specifies a tag to have a recipient place their initials in the document. The \"optional\" parameter sets if the initials are required or optional. [optional]
 */
@property(nonatomic) NSArray<DSInitialHere>* initialHereTabs;
/* Specifies a tag on the document when you want the recipient to add supporting documents to an envelope. [optional]
 */
@property(nonatomic) NSArray<DSSignerAttachment>* signerAttachmentTabs;
/* Specifies a tag on the document where you want the recipient to approve documents in an envelope without placing a signature or initials on the document. If the recipient clicks the Approve tag during the signing process, the recipient is considered to have signed the document. No information is shown on the document for the approval, but it is recorded as a signature in the envelope history. [optional]
 */
@property(nonatomic) NSArray<DSApprove>* approveTabs;
/* Specifies a tag on the document where you want to give the recipient the option of declining an envelope. If the recipient clicks the Decline tag during the signing process, the envelope is voided. [optional]
 */
@property(nonatomic) NSArray<DSDecline>* declineTabs;
/* Specifies a tag on the document where you want the recipient's name to appear. [optional]
 */
@property(nonatomic) NSArray<DSFullName>* fullNameTabs;
/*  [optional]
 */
@property(nonatomic) NSArray<DSDateSigned>* dateSignedTabs;
/* Specifies a tag on the document where you want the envelope ID for to appear. Recipients cannot enter or change the information in this tab, it is for informational purposes only. [optional]
 */
@property(nonatomic) NSArray<DSEnvelopeId>* envelopeIdTabs;
/* Specifies a tag on the document where you want the recipient's company name to appear.\n\nWhen getting information that includes this tab type, the original value of the tab when the associated envelope was sent is included in the response. [optional]
 */
@property(nonatomic) NSArray<DSCompany>* companyTabs;
/* Specifies a tag on the document where you want the recipient's title to appear.\n\nWhen getting information that includes this tab type, the original value of the tab when the associated envelope was sent is included in the response. [optional]
 */
@property(nonatomic) NSArray<DSTitle>* titleTabs;
/* Specifies a that that is an adaptable field that allows the recipient to enter different text information.\n\nWhen getting information that includes this tab type, the original value of the tab when the associated envelope was sent is included in the response. [optional]
 */
@property(nonatomic) NSArray<DSText>* textTabs;
/* Specifies a tag on the document where you want the recipient to enter a number. It uses the same parameters as a Text tab, with the validation message and pattern set for number information.\n\nWhen getting information that includes this tab type, the original value of the tab when the associated envelope was sent is included in the response. [optional]
 */
@property(nonatomic) NSArray* /* NSNumber */ numberTabs;
/* Specifies a tag on the document where you want the recipient to enter a Social Security Number (SSN). A SSN can be typed with or without dashes. It uses the same parameters as a Text tab, with the validation message and pattern set for SSN information.\n\nWhen getting information that includes this tab type, the original value of the tab when the associated envelope was sent is included in the response. [optional]
 */
@property(nonatomic) NSArray<DSSsn>* ssnTabs;
/* Specifies a tab on the document where you want the recipient to enter a date. Date tabs are single-line fields that allow date information to be entered in any format. The tooltip for this tab recommends entering the date as MM/DD/YYYY, but this is not enforced. The format entered by the signer is retained. \n\nIf you need a particular date format enforced, DocuSign recommends using a Text tab with a Validation Pattern and Validation Message to enforce the format. [optional]
 */
@property(nonatomic) NSArray* /* NSDate */ dateTabs;
/* Specifies a tag on the document where you want the recipient to enter a ZIP code. The ZIP code can be a five numbers or the ZIP+4 format with nine numbers. The zip code can be typed with or without dashes. It uses the same parameters as a Text tab, with the validation message and pattern set for ZIP code information.\n\nWhen getting information that includes this tab type, the original value of the tab when the associated envelope was sent is included in the response. [optional]
 */
@property(nonatomic) NSArray<DSZip>* zipTabs;
/* Specifies a tag on the document where you want the recipient to enter an email. Email tags are single-line fields that accept any characters. The system checks that a valid email format (i.e. xxx@yyy.zzz) is entered in the tag. It uses the same parameters as a Text tab, with the validation message and pattern set for email information.\n\nWhen getting information that includes this tab type, the original value of the tab when the associated envelope was sent is included in the response. [optional]
 */
@property(nonatomic) NSArray<DSEmail>* emailTabs;
/* Specifies a tag on the document where you want to place additional information, in the form of a note, on a document for a recipient. [optional]
 */
@property(nonatomic) NSArray<DSNote>* noteTabs;
/* Specifies a tag on the document in a location where the recipient can select an option. [optional]
 */
@property(nonatomic) NSArray<DSCheckbox>* checkboxTabs;
/* Specifies a tag on the document in a location where the recipient can select one option from a group of options using a radio button. The radio buttons do not have to be on the same page in a document. [optional]
 */
@property(nonatomic) NSArray<DSRadioGroup>* radioGroupTabs;
/* Specify this tag to give your recipient a list of options, presented as a drop-down list, from which they can select. [optional]
 */
@property(nonatomic) NSArray<DSList>* listTabs;
/* Specifies tag on a document where you want the recipient's first name to appear. This tag takes the recipient's name, as entered in the recipient information, splits it into sections based on spaces and uses the first section as the first name. [optional]
 */
@property(nonatomic) NSArray<DSFirstName>* firstNameTabs;
/* Specifies a tag on a document where you want the recipient’s last name to appear. This tag takes the recipient’s name, as entered in the recipient information, splits it into sections based on spaces and uses the last section as the last name. [optional]
 */
@property(nonatomic) NSArray<DSLastName>* lastNameTabs;
/*  [optional]
 */
@property(nonatomic) NSArray<DSEmailAddress>* emailAddressTabs;
/* Specifies a tag that is used to add a calculated field to a document. Envelope recipients cannot directly enter information into the tag; the formula tab calculates and displays a new value when changes are made to the reference tag values. The reference tag information and calculation operations are entered in the \"formula\" element. See the [ML:Using the Calculated Fields Feature] quick start guide or [ML:DocuSign Service User Guide] for more information about formulas. [optional]
 */
@property(nonatomic) NSArray<DSFormulaTab>* formulaTabs;

@end
