/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MKSearchCompleterDelegate.h>
#import <Messenger/MKLocalSearchCompleterDelegate.h>
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

