/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadMontageThumbnail, NSString;

@interface MNInboxSingleMontageViewModel : FBValueObject <NSCopying> {

	MNThreadMontageThumbnail* _thumbnail;
	NSString* _authorUserId;
	unsigned long long _timestamp;

}

@property (nonatomic,copy,readonly) MNThreadMontageThumbnail * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy,readonly) NSString * authorUserId;                           //@synthesize authorUserId=_authorUserId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)authorUserId;
-(id)initWithThumbnail:(id)arg1 authorUserId:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(unsigned long long)timestamp;
-(MNThreadMontageThumbnail *)thumbnail;
@end

