/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBVideoHomeLikeButton, FBMemPage, FBUserSession, NSArray;

@interface FBVideoHomeLikeButtonComponentView : UIView {

	FBVideoHomeLikeButton* _button;
	BOOL _viewInvalidated;
	FBMemPage* _page;
	FBUserSession* _session;
	/*^block*/id _stateToggledToBlock;
	NSArray* _trackingCodes;

}

@property (nonatomic,retain) FBMemPage * page;                     //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id stateToggledToBlock;                 //@synthesize stateToggledToBlock=_stateToggledToBlock - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                //@synthesize trackingCodes=_trackingCodes - In the implementation block
-(NSArray *)trackingCodes;
-(id)stateToggledToBlock;
-(void)setStateToggledToBlock:(id)arg1 ;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(FBMemPage *)page;
-(void)setPage:(FBMemPage *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
