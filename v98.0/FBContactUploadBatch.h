/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBContactUploadBatch : FBGraphQLInput {

	NSString* _recordId;
	NSString* _modifier;
	NSString* _minimalHash;
	NSString* _extendedHash;
	NSString* _name;
	NSString* _firstName;
	NSString* _lastName;
	NSArray* _phones;
	NSArray* _emails;

}

@property (nonatomic,copy) NSString * recordId;                  //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,copy) NSString * modifier;                  //@synthesize modifier=_modifier - In the implementation block
@property (nonatomic,copy) NSString * minimalHash;               //@synthesize minimalHash=_minimalHash - In the implementation block
@property (nonatomic,copy) NSString * extendedHash;              //@synthesize extendedHash=_extendedHash - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSArray * phones;                     //@synthesize phones=_phones - In the implementation block
@property (nonatomic,copy) NSArray * emails;                     //@synthesize emails=_emails - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)minimalHash;
-(void)setMinimalHash:(NSString *)arg1 ;
-(NSString *)extendedHash;
-(void)setExtendedHash:(NSString *)arg1 ;
-(NSString *)modifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)emails;
-(NSArray *)phones;
-(void)setEmails:(NSArray *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(void)setModifier:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setRecordId:(NSString *)arg1 ;
-(NSString *)recordId;
@end

