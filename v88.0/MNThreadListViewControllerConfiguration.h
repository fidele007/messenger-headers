/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNThreadListViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowLoadingView;
	BOOL _shouldShowEditButton;
	BOOL _shouldShowMoreCell;
	BOOL _shouldLoadCameraRoll;
	BOOL _disableEditActionForPrimaryThreadList;
	BOOL _shouldFetchInboxUnits;
	unsigned long long _headerViewType;
	long long _threadListType;
	unsigned long long _threadListEditActionType;

}

@property (nonatomic,readonly) unsigned long long headerViewType;                        //@synthesize headerViewType=_headerViewType - In the implementation block
@property (nonatomic,readonly) long long threadListType;                                 //@synthesize threadListType=_threadListType - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowLoadingView;                               //@synthesize shouldShowLoadingView=_shouldShowLoadingView - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowEditButton;                                //@synthesize shouldShowEditButton=_shouldShowEditButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMoreCell;                                  //@synthesize shouldShowMoreCell=_shouldShowMoreCell - In the implementation block
@property (nonatomic,readonly) BOOL shouldLoadCameraRoll;                                //@synthesize shouldLoadCameraRoll=_shouldLoadCameraRoll - In the implementation block
@property (nonatomic,readonly) unsigned long long threadListEditActionType;              //@synthesize threadListEditActionType=_threadListEditActionType - In the implementation block
@property (nonatomic,readonly) BOOL disableEditActionForPrimaryThreadList;               //@synthesize disableEditActionForPrimaryThreadList=_disableEditActionForPrimaryThreadList - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchInboxUnits;                               //@synthesize shouldFetchInboxUnits=_shouldFetchInboxUnits - In the implementation block
-(BOOL)shouldShowMoreCell;
-(long long)threadListType;
-(BOOL)shouldFetchInboxUnits;
-(BOOL)shouldShowEditButton;
-(unsigned long long)headerViewType;
-(unsigned long long)threadListEditActionType;
-(BOOL)disableEditActionForPrimaryThreadList;
-(id)initWithHeaderViewType:(unsigned long long)arg1 threadListType:(long long)arg2 shouldShowLoadingView:(BOOL)arg3 shouldShowEditButton:(BOOL)arg4 shouldShowMoreCell:(BOOL)arg5 shouldLoadCameraRoll:(BOOL)arg6 threadListEditActionType:(unsigned long long)arg7 disableEditActionForPrimaryThreadList:(BOOL)arg8 shouldFetchInboxUnits:(BOOL)arg9 ;
-(BOOL)shouldLoadCameraRoll;
-(BOOL)shouldShowLoadingView;
@end

