/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/MKSearchCompleterDelegate.h>
#import <libobjc.A.dylib/MKLocalSearchCompleterDelegate.h>
#import <Messenger/MNLocationTypeaheadFetching.h>

@protocol MNLocationTypeaheadFetcherDelegate;
@class MKLocalSearchCompleter, NSString;

@interface MNLocationTypeaheadFetcher : NSObject <MKSearchCompleterDelegate, MKLocalSearchCompleterDelegate, MNLocationTypeaheadFetching> {

	MKLocalSearchCompleter* _localSearchCompleter;
	id<MNLocationTypeaheadFetcherDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationTypeaheadFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)fetchLocationsWithSearchQuery:(id)arg1 forLocation:(CLLocationCoordinate2D)arg2 radius:(double)arg3 ;
-(void)_handleCompleterDidUpdateResultsWithResults:(id)arg1 ;
-(void)_handleCompleterDidFailWithError:(id)arg1 ;
-(void)setDelegate:(id<MNLocationTypeaheadFetcherDelegate>)arg1 ;
-(id<MNLocationTypeaheadFetcherDelegate>)delegate;
-(void)completer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)completerDidUpdateResults:(id)arg1 ;
-(void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2 ;
-(void)completerDidFail:(id)arg1 error:(id)arg2 ;
@end

