/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface FBUIKitRenderedImageFactory : NSObject {

	NSDictionary* _iconMetadata;

}

@property (nonatomic,copy,readonly) NSDictionary * iconMetadata;              //@synthesize iconMetadata=_iconMetadata - In the implementation block
+(id)sharedFactory;
-(id)init;
-(NSDictionary *)iconMetadata;
-(id)metadataForImageNamed:(id)arg1 ;
@end

