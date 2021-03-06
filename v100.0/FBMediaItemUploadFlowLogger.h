/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface FBMediaItemUploadFlowLogger : NSObject {

	NSDictionary* _extras;
	NSString* _moduleName;
	double _uploadProcessStartTime;

}
-(void)_logEvent:(id)arg1 ;
-(void)_logEvent:(id)arg1 error:(id)arg2 ;
-(void)logUploadStart;
-(void)logProcessStart;
-(void)logProcessSuccess;
-(void)_logEvent:(id)arg1 extras:(id)arg2 ;
-(id)initWithModuleName:(id)arg1 extras:(id)arg2 ;
-(void)logUploadSuccess;
-(void)logUploadCancel;
-(void)logUploadFail:(id)arg1 ;
-(void)logProcessCancel;
-(void)logProcessFail:(id)arg1 ;
@end

