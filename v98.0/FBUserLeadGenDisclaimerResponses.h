/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBUserLeadGenDisclaimerResponses : FBGraphQLInput {

	NSString* _checkboxKey;
	NSString* _isChecked;

}

@property (nonatomic,copy) NSString * checkboxKey;              //@synthesize checkboxKey=_checkboxKey - In the implementation block
@property (nonatomic,copy) NSString * isChecked;                //@synthesize isChecked=_isChecked - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)checkboxKey;
-(void)setCheckboxKey:(NSString *)arg1 ;
-(void)setIsChecked:(NSString *)arg1 ;
-(NSString *)isChecked;
@end

