/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNCDNAssetIdentifier : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _profileImageIdentifier_userId;
	unsigned long long _profileImageIdentifier_size;
	NSString* _threadImageIdentifier_fbid;
	unsigned long long _threadImageIdentifier_size;
	NSString* _photoIdentifier_photoId;
	unsigned long long _photoIdentifier_size;
	NSString* _videoIdentifier_videoId;

}
+(id)videoIdentifierWithVideoId:(id)arg1 ;
+(id)photoIdentifierWithPhotoId:(id)arg1 size:(unsigned long long)arg2 ;
+(id)profileImageIdentifierWithUserId:(id)arg1 size:(unsigned long long)arg2 ;
+(id)threadImageIdentifierWithFbid:(id)arg1 size:(unsigned long long)arg2 ;
-(void)matchProfileImageIdentifier:(/*^block*/id)arg1 threadImageIdentifier:(/*^block*/id)arg2 photoIdentifier:(/*^block*/id)arg3 videoIdentifier:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

