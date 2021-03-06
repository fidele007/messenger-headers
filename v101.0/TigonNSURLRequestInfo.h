/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSURLSessionTask;

@interface TigonNSURLRequestInfo : NSObject {

	unique_ptr<facebook::tigon::TigonCallbacks, std::__1::default_delete<facebook::tigon::TigonCallbacks> >* _requestCallbacks;
	shared_ptr<facebook::mobile::xplat::executor::SerialExecutor>* _executor;
	NSURLSessionTask* _taskToken;
	float _lastPriority;

}
-(shared_ptr<facebook::mobile::xplat::executor::SerialExecutor>*)executor;
-(id)initWithCallbacks:(unique_ptr<facebook::tigon::TigonCallbacks, std::__1::default_delete<facebook::tigon::TigonCallbacks> >*)arg1 executor:(shared_ptr<facebook::mobile::xplat::executor::SerialExecutor>*)arg2 priority:(float)arg3 ;
-(void)updateTaskToken:(id)arg1 ;
-(void)changeTaskPriority:(TigonPriorityData)arg1 ;
-(TigonCallbacks*)requestCallbacks;
-(void)cancelRequest;
@end

