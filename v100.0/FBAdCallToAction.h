/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBAdCallToActionData;

@interface FBAdCallToAction : FBGraphQLInput {

	NSString* _typeAttribute;
	FBAdCallToActionData* _value;

}

@property (nonatomic,copy) NSString * typeAttribute;                  //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,copy) FBAdCallToActionData * value;              //@synthesize value=_value - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBAdCallToActionData *)value;
-(void)setValue:(FBAdCallToActionData *)arg1 ;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(NSString *)typeAttribute;
@end

