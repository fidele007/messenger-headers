/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString;

@interface FBBasePaymentInvoiceItemHelperParams : FBGraphQLInput {

	NSString* _client;
	NSString* _sellerId;
	NSString* _text;

}

@property (nonatomic,copy) NSString * client;                //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * sellerId;              //@synthesize sellerId=_sellerId - In the implementation block
@property (nonatomic,copy) NSString * text;                  //@synthesize text=_text - In the implementation block
-(void)setSellerId:(NSString *)arg1 ;
-(NSString *)sellerId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)client;
-(void)setClient:(NSString *)arg1 ;
@end

