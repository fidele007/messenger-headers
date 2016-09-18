/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, CLLocationManager, NSObject, NSString;

@interface FBOneTimeLocationFetcher : NSObject <CLLocationManagerDelegate> {

	NSMutableArray* _entries;
	CLLocationManager* _locationManager;
	double _accuracyLimit;
	NSObject*<OS_dispatch_queue> _workThread;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCLLocationManager:(id)arg1 precision:(double)arg2 ;
-(void)requestForOneTimeLocation:(/*^block*/id)arg1 ;
-(void)_processCLLocation:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end
