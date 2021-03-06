/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBGraphSearchFilter : FBGraphQLInput {

	NSString* _name;
	NSString* _handle;
	NSString* _action;
	NSString* _value;

}

@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * value;               //@synthesize value=_value - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)action;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
@end

