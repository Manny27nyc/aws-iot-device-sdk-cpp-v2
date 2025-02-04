#pragma once

/* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * This file is generated
 */

#include <aws/crt/DateTime.h>
#include <aws/crt/JsonObject.h>

#include <aws/iotshadow/Exports.h>

#include <aws/crt/JsonObject.h>
#include <aws/crt/StlAllocator.h>

namespace Aws
{
    namespace Iotshadow
    {

        /**
         * An event generated when a shadow document was updated by a request to AWS IoT.  The event payload contains
         * only the changes requested.
         *
         */
        class AWS_IOTSHADOW_API ShadowDeltaUpdatedEvent final
        {
          public:
            ShadowDeltaUpdatedEvent() = default;

            ShadowDeltaUpdatedEvent(const Crt::JsonView &doc);
            ShadowDeltaUpdatedEvent &operator=(const Crt::JsonView &doc);

            void SerializeToObject(Crt::JsonObject &doc) const;

            /**
             * The current version of the document for the device's shadow.
             *
             */
            Aws::Crt::Optional<int32_t> Version;

            /**
             * The time the event was generated by AWS IoT.
             *
             */
            Aws::Crt::Optional<Aws::Crt::DateTime> Timestamp;

            /**
             * Timestamps for the shadow properties that were updated.
             *
             */
            Aws::Crt::Optional<Aws::Crt::JsonObject> Metadata;

            /**
             * Shadow properties that were updated.
             *
             */
            Aws::Crt::Optional<Aws::Crt::JsonObject> State;

          private:
            static void LoadFromObject(ShadowDeltaUpdatedEvent &obj, const Crt::JsonView &doc);
        };
    } // namespace Iotshadow
} // namespace Aws
