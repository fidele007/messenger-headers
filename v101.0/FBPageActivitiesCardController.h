/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPageActivitiesCardControllerProtocol.h>

@protocol FBPageActivitiesCardControllerDelegate;
@class NSString, FBMemPage, FBUserSession, FBScenePath;

@interface FBPageActivitiesCardController : NSObject <FBPageActivitiesCardControllerProtocol> {

	FBMemPage* _page;
	FBUserSession* _userSession;
	NSString* _title;
	id<FBPageActivitiesCardControllerDelegate> _delegate;
	NSString* _analyticsUUID;
	FBScenePath* _scenePath;

}

@property (nonatomic,readonly) FBMemPage * page;                                                        //@synthesize page=_page - In the implementation block
@property (nonatomic,__weak,readonly) id<FBPageActivitiesCardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBUserSession * userSession;                                             //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsUUID;                                           //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                 //@synthesize scenePath=_scenePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
@property (nonatomic,copy) NSString * title;                                                            //@synthesize title=_title - In the implementation block
-(NSString *)analyticsUUID;
-(FBScenePath *)scenePath;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 scenePath:(id)arg5 ;
-(void)logPageActionWithEventName:(id)arg1 extra:(id)arg2 module:(id)arg3 ;
-(void)configureWithPage:(id)arg1 ;
-(void)prepareForCardCellDisplay;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 ;
-(BOOL)showBorder;
-(void)logPageActionWithEventName:(id)arg1 extra:(id)arg2 ;
-(id)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBPageActivitiesCardControllerDelegate>)delegate;
-(NSString *)title;
-(FBMemPage *)page;
-(UIView*<FBPageCardProtocol>)cardView;
-(FBUserSession *)userSession;
@end

