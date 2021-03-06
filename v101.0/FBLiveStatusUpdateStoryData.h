/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBLiveStatusUpdateStoryData : NSObject {

	NSString* _storyID;
	NSString* _cacheID;
	NSString* _videoID;

}

@property (nonatomic,copy,readonly) NSString * storyID;              //@synthesize storyID=_storyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheID;              //@synthesize cacheID=_cacheID - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoID;              //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataID; 
-(NSString *)videoID;
-(NSString *)storyID;
-(id)initWithStoryID:(id)arg1 cacheID:(id)arg2 videoID:(id)arg3 ;
-(NSString *)dataID;
-(id)description;
-(id)debugDescription;
-(NSString *)cacheID;
@end

