/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBDateTimeFieldsElementFields;

@interface FBDateTimeFieldsElement : FBGraphQLInput {

	NSString* _formFieldId;
	NSString* _disableAutofill;
	FBDateTimeFieldsElementFields* _value;

}

@property (nonatomic,copy) NSString * formFieldId;                             //@synthesize formFieldId=_formFieldId - In the implementation block
@property (nonatomic,copy) NSString * disableAutofill;                         //@synthesize disableAutofill=_disableAutofill - In the implementation block
@property (nonatomic,copy) FBDateTimeFieldsElementFields * value;              //@synthesize value=_value - In the implementation block
-(NSString *)disableAutofill;
-(NSString *)formFieldId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setFormFieldId:(NSString *)arg1 ;
-(void)setDisableAutofill:(NSString *)arg1 ;
-(FBDateTimeFieldsElementFields *)value;
-(void)setValue:(FBDateTimeFieldsElementFields *)arg1 ;
@end

