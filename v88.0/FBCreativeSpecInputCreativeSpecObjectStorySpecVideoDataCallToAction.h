/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBCreativeSpecInputCreativeSpecObjectStorySpecVideoDataCallToActionValue;

@interface FBCreativeSpecInputCreativeSpecObjectStorySpecVideoDataCallToAction : FBGraphQLInput {

	NSString* _typeAttribute;
	FBCreativeSpecInputCreativeSpecObjectStorySpecVideoDataCallToActionValue* _value;

}

@property (nonatomic,copy) NSString * typeAttribute;                                                                      //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,copy) FBCreativeSpecInputCreativeSpecObjectStorySpecVideoDataCallToActionValue * value;              //@synthesize value=_value - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBCreativeSpecInputCreativeSpecObjectStorySpecVideoDataCallToActionValue *)value;
-(void)setValue:(FBCreativeSpecInputCreativeSpecObjectStorySpecVideoDataCallToActionValue *)arg1 ;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(NSString *)typeAttribute;
@end

