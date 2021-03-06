/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface MNAudioAttachmentViewModel : FBValueObject <NSCopying> {

	double _duration;
	NSURL* _downloadURL;
	NSString* _localCacheKey;

}

@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSURL * downloadURL;                   //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * localCacheKey;              //@synthesize localCacheKey=_localCacheKey - In the implementation block
-(NSString *)localCacheKey;
-(id)initWithDuration:(double)arg1 downloadURL:(id)arg2 localCacheKey:(id)arg3 ;
-(double)duration;
-(NSURL *)downloadURL;
@end

