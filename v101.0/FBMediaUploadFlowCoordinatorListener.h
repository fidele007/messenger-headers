/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaUploadFlowCoordinatorListener <NSObject>
@required
-(void)completedUploadAllMedia:(id)arg1;
-(void)uploadManager:(id)arg1 didStartMediaUploadItem:(id)arg2;
-(void)uploadManager:(id)arg1 didFinishMediaUploadItem:(id)arg2 mediaFBID:(id)arg3;
-(void)uploadManager:(id)arg1 didUpdateTotalProgress:(double)arg2;
-(void)uploadManager:(id)arg1 didUploadMediaItem:(id)arg2 failWithError:(id)arg3;
-(void)uploadManager:(id)arg1 didStartTranscodingForMediaItem:(id)arg2;

@end
