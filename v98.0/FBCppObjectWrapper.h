/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBInvalidating.h>

@class NSString;

@interface FBCppObjectWrapper : NSObject <FBInvalidating> {

	mutex _lock;
	BOOL _valid;
	shared_ptr<facebook::mobile::xplat::compactdisk::Invalidatable>* _object;

}

@property (nonatomic,readonly) shared_ptr<facebook::mobile::xplat::compactdisk::Invalidatable>* object;              //@synthesize object=_object - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                            //@synthesize valid=_valid - In the implementation block
-(void)invalidate;
-(BOOL)isValid;
-(shared_ptr<facebook::mobile::xplat::compactdisk::Invalidatable>*)object;
-(id)initWithObject:(const shared_ptr<facebook::mobile::xplat::compactdisk::Invalidatable>*)arg1 ;
@end

