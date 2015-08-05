//
//  DKUserIdentity.h
//  DeskKit
//
//  Created by Noel Artiles on 8/3/15.
//  Copyright (c) 2015 Desk.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DKUserIdentity : NSObject

NS_ASSUME_NONNULL_BEGIN
@property (nonatomic, copy) NSString *givenName; // i.e. First name
@property (nonatomic, copy) NSString *familyName; // i.e. Last name
@property (nonatomic, copy) NSString *fullName; // Localized version of name created from givenName and FamilyName
@property (nonatomic, copy) NSString *email;

- (instancetype)initWithEmail:(NSString *)email;

NS_ASSUME_NONNULL_END

@end