/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNThreadCellConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowDeleteButtonInActionPanel;
	BOOL _shouldShowMoreButtonInActionPanel;
	BOOL _shouldShowIgnoreButtonInActionPanel;
	BOOL _shouldShowRequestActionView;
	long long _muteDisplaySettingForActionPanel;
	unsigned long long _threadListDisplaySurface;

}

@property (nonatomic,readonly) BOOL shouldShowDeleteButtonInActionPanel;                 //@synthesize shouldShowDeleteButtonInActionPanel=_shouldShowDeleteButtonInActionPanel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMoreButtonInActionPanel;                   //@synthesize shouldShowMoreButtonInActionPanel=_shouldShowMoreButtonInActionPanel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowIgnoreButtonInActionPanel;                 //@synthesize shouldShowIgnoreButtonInActionPanel=_shouldShowIgnoreButtonInActionPanel - In the implementation block
@property (nonatomic,readonly) long long muteDisplaySettingForActionPanel;               //@synthesize muteDisplaySettingForActionPanel=_muteDisplaySettingForActionPanel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowRequestActionView;                         //@synthesize shouldShowRequestActionView=_shouldShowRequestActionView - In the implementation block
@property (nonatomic,readonly) unsigned long long threadListDisplaySurface;              //@synthesize threadListDisplaySurface=_threadListDisplaySurface - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(BOOL)shouldShowRequestActionView;
-(BOOL)shouldShowMoreButtonInActionPanel;
-(long long)muteDisplaySettingForActionPanel;
-(BOOL)shouldShowIgnoreButtonInActionPanel;
-(BOOL)shouldShowDeleteButtonInActionPanel;
-(unsigned long long)threadListDisplaySurface;
-(id)initWithShouldShowDeleteButtonInActionPanel:(BOOL)arg1 shouldShowMoreButtonInActionPanel:(BOOL)arg2 shouldShowIgnoreButtonInActionPanel:(BOOL)arg3 muteDisplaySettingForActionPanel:(long long)arg4 shouldShowRequestActionView:(BOOL)arg5 threadListDisplaySurface:(unsigned long long)arg6 ;
@end

