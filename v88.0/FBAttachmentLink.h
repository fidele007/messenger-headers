/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBAttachmentExternalLinkData;

@interface FBAttachmentLink : FBGraphQLInput {

	NSString* _internalLinkableId;
	FBAttachmentExternalLinkData* _external;
	NSString* _quote;
	NSString* _warnCanHandle;

}

@property (nonatomic,copy) NSString * internalLinkableId;                        //@synthesize internalLinkableId=_internalLinkableId - In the implementation block
@property (nonatomic,copy) FBAttachmentExternalLinkData * external;              //@synthesize external=_external - In the implementation block
@property (nonatomic,copy) NSString * quote;                                     //@synthesize quote=_quote - In the implementation block
@property (nonatomic,copy) NSString * warnCanHandle;                             //@synthesize warnCanHandle=_warnCanHandle - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)internalLinkableId;
-(void)setInternalLinkableId:(NSString *)arg1 ;
-(void)setExternal:(FBAttachmentExternalLinkData *)arg1 ;
-(void)setQuote:(NSString *)arg1 ;
-(NSString *)warnCanHandle;
-(void)setWarnCanHandle:(NSString *)arg1 ;
-(FBAttachmentExternalLinkData *)external;
-(NSString *)quote;
@end
