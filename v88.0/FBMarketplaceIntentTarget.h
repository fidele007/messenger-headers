/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBMarketplaceIntentTarget : FBIntentTarget {

	NSString* _destinationType;
	NSString* _destinationID;
	NSString* _referralSurface;
	NSString* _fallbackURL;

}

@property (nonatomic,copy,readonly) NSString * destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationID;                //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy,readonly) NSString * referralSurface;              //@synthesize referralSurface=_referralSurface - In the implementation block
@property (nonatomic,copy,readonly) NSString * fallbackURL;                  //@synthesize fallbackURL=_fallbackURL - In the implementation block
+(id)marketplaceTargetWithMarketplaceAttachmentStyleInfo:(id)arg1 ;
+(id)marketplaceTargetWithMarketplacePost:(id)arg1 ;
+(id)marketplaceTargetWithMarketplace:(id)arg1 ;
+(id)marketplaceTargetWithDestinationType:(id)arg1 destionationID:(id)arg2 referralSurface:(id)arg3 fallbackURL:(id)arg4 ;
-(id)fallbackURLs;
-(NSString *)referralSurface;
-(id)initWithDestinationType:(id)arg1 destinationID:(id)arg2 referralSurface:(id)arg3 fallbackURL:(id)arg4 ;
-(NSString *)destinationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)destinationID;
-(NSString *)fallbackURL;
@end

