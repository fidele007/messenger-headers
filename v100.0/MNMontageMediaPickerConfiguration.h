/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMontageMediaPickerConfiguration : FBValueObject <NSCopying> {

	BOOL _allowsMultipleSelection;
	BOOL _allowsVideo;
	BOOL _allowsVideoDurationCap;
	long long _maxVideoDurationAsFallbackToVideoSize;

}

@property (nonatomic,readonly) BOOL allowsMultipleSelection;                                 //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,readonly) BOOL allowsVideo;                                             //@synthesize allowsVideo=_allowsVideo - In the implementation block
@property (nonatomic,readonly) BOOL allowsVideoDurationCap;                                  //@synthesize allowsVideoDurationCap=_allowsVideoDurationCap - In the implementation block
@property (nonatomic,readonly) long long maxVideoDurationAsFallbackToVideoSize;              //@synthesize maxVideoDurationAsFallbackToVideoSize=_maxVideoDurationAsFallbackToVideoSize - In the implementation block
-(id)initWithAllowsMultipleSelection:(BOOL)arg1 allowsVideo:(BOOL)arg2 allowsVideoDurationCap:(BOOL)arg3 maxVideoDurationAsFallbackToVideoSize:(long long)arg4 ;
-(BOOL)allowsVideo;
-(BOOL)allowsVideoDurationCap;
-(long long)maxVideoDurationAsFallbackToVideoSize;
-(BOOL)allowsMultipleSelection;
@end

