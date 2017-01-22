/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBThreadSettingsParams : FBGraphQLInput {

	NSString* _name;
	NSString* _descriptionText;
	NSString* _joinableMode;
	NSString* _approvalMode;
	NSString* _discoverableMode;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * joinableMode;                  //@synthesize joinableMode=_joinableMode - In the implementation block
@property (nonatomic,copy) NSString * approvalMode;                  //@synthesize approvalMode=_approvalMode - In the implementation block
@property (nonatomic,copy) NSString * discoverableMode;              //@synthesize discoverableMode=_discoverableMode - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setJoinableMode:(NSString *)arg1 ;
-(void)setApprovalMode:(NSString *)arg1 ;
-(NSString *)approvalMode;
-(NSString *)joinableMode;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setDiscoverableMode:(NSString *)arg1 ;
-(NSString *)discoverableMode;
@end
