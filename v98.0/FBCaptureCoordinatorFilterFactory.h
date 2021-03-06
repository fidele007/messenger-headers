/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCaptureCoordinatorFilterFactoryProtocol.h>

@class NSString;

@interface FBCaptureCoordinatorFilterFactory : NSObject <FBCaptureCoordinatorFilterFactoryProtocol> {

	unordered_map<NSString *, std::__1::pair<id<FBMPFilter> ()(NSDictionary<NSString *,id> *), id<FBCaptureCoordinatorFilterController> ()(id<FBMPFilter>)>, FB::ObjcHash, FB::ObjcEqual, std::__1::allocator<std::__1::pair<NSString *const, std::__1::pair<id<FBMPFilter> ()(NSDictionary<NSString *,id> *), id<FBCaptureCoordinatorFilterController> ()(id<FBMPFilter>)> > > >* _nameToFilterMap;
	mutex _mutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)filterForName:(id)arg1 config:(id)arg2 ;
-(id)_filterForName:(id)arg1 config:(id)arg2 ;
-(id)_filterControllerForName:(id)arg1 filter:(id)arg2 ;
-(void)registerFilterNamed:(id)arg1 filterBlock:(/*^block*/id)arg2 controllerBlock:(/*^block*/id)arg3 ;
@end

