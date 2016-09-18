/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMessageOutgoingAttribution : FBValueObject <NSCopying, NSCoding> {

	BOOL _fromTrustedExternalURL;
	BOOL _renderAsSticker;
	NSString* _sourceAppFBID;
	NSString* _bundleID;
	NSString* _attributedAppMetadata;

}

@property (nonatomic,copy,readonly) NSString * sourceAppFBID;                      //@synthesize sourceAppFBID=_sourceAppFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * attributedAppMetadata;              //@synthesize attributedAppMetadata=_attributedAppMetadata - In the implementation block
@property (nonatomic,readonly) BOOL fromTrustedExternalURL;                        //@synthesize fromTrustedExternalURL=_fromTrustedExternalURL - In the implementation block
@property (nonatomic,readonly) BOOL renderAsSticker;                               //@synthesize renderAsSticker=_renderAsSticker - In the implementation block
-(id)initWithSourceAppFBID:(id)arg1 bundleID:(id)arg2 attributedAppMetadata:(id)arg3 fromTrustedExternalURL:(BOOL)arg4 renderAsSticker:(BOOL)arg5 ;
-(BOOL)renderAsSticker;
-(NSString *)sourceAppFBID;
-(NSString *)attributedAppMetadata;
-(BOOL)fromTrustedExternalURL;
-(NSString *)bundleID;
@end
