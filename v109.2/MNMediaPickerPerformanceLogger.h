/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBQuickPerformanceLogger;

@interface MNMediaPickerPerformanceLogger : NSObject {

	FBQuickPerformanceLogger* _quickPerformanceLogger;

}
-(id)initWithQuickPerformanceLogger:(id)arg1 ;
-(void)willFetchAlbum:(id)arg1 inSurface:(id)arg2 caller:(id)arg3 ;
-(void)didFetchAlbum:(id)arg1 assetsCount:(long long)arg2 ;
-(void)willQueryDefaultAlbumInfoInSurface:(id)arg1 caller:(id)arg2 ;
-(void)didQueryDefaultAlbumInfo;
-(void)willQueryAllAlbumsInfoInSurface:(id)arg1 caller:(id)arg2 ;
-(void)didQueryAllAlbumsInfo;
-(void)cancelFetchAlbum:(id)arg1 ;
-(void)_startLoggingOfAlbumsInfoQueryWithTag:(id)arg1 inSurface:(id)arg2 caller:(id)arg3 ;
-(void)_endLoggingOfAlbumsInfoQueryWithTag:(id)arg1 ;
@end

