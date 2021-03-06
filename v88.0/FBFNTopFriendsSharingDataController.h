/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocationServicesAlwaysNUXDataSource.h>

@class FBUserSession, NSArray;

@interface FBFNTopFriendsSharingDataController : NSObject <FBLocationServicesAlwaysNUXDataSource> {

	FBUserSession* _session;
	NSArray* _friendsSharing;
	long long _totalFriendsSharing;
	BOOL _isLoaded;

}

@property (nonatomic,readonly) BOOL isLoaded;              //@synthesize isLoaded=_isLoaded - In the implementation block
-(void)_processResponse:(id)arg1 ;
-(long long)friendsSharingCount;
-(void)loadDataWithFriendsSharingCount:(long long)arg1 ;
-(id)friendsSharing;
-(BOOL)isLoaded;
-(id)initWithSession:(id)arg1 ;
@end

